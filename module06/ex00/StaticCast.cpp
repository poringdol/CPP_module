#include <sstream>
#include <stdexcept>
#include <limits>
#include <cstdlib>
#include <cmath>
#include "StaticCast.hpp"

#include <iostream>

StaticCast::StaticCast(const char* new_literal) :
			literal(new_literal),
			endptr(NULL),
			stringToDouble(0),
			error(false),
			isNanInf(false)
{
	stringToDouble = strtod(literal, &endptr);
	if (errno || *endptr)
		error = true;
	if (std::isnan(stringToDouble) || !std::isfinite(stringToDouble))
		isNanInf = true;
}
StaticCast::StaticCast(const StaticCast& new_StaticCast) {(void)new_StaticCast;}
StaticCast::~StaticCast() {}
StaticCast& StaticCast::operator=(const StaticCast& new_StaticCast) {
	(void)new_StaticCast;
	return *this;
}

void	StaticCast::convert(char& res) {
	if (error || isNanInf || stringToDouble < -128 || stringToDouble > 127)
		throw std::invalid_argument("impossible");
	res = static_cast<char>(stringToDouble);
	if (!isprint(res))
		throw std::invalid_argument("Non displayable");
}

void	StaticCast::convert(int& res) {
	if (stringToDouble < (std::numeric_limits<int>::min()) ||
		stringToDouble > (std::numeric_limits<int>::max()) ||
		error || isNanInf)
		throw std::invalid_argument("impossible");
	res = static_cast<int>(stringToDouble);
}

void	StaticCast::convert(float& res) {
	std::string charToString(literal);
	if (charToString == "inf")
		res = std::numeric_limits<float>::infinity();
	else if (charToString == "-inf")
		res = -std::numeric_limits<float>::infinity();
	else if (charToString == "nan")
		res = std::numeric_limits<float>::quiet_NaN();
	else if (stringToDouble < (-std::numeric_limits<float>::max()) ||
		stringToDouble > (std::numeric_limits<float>::max()) ||
		error)
		throw std::invalid_argument("impossible");
	else
		res = static_cast<float>(stringToDouble);
}

void	StaticCast::convert(double& res) {
	std::string charToString(literal);
	if (error)
		throw std::invalid_argument("impossible");
	res = stringToDouble;
}
