#include <sstream>
#include <stdexcept>
#include <limits>
#include "Cast.hpp"

Cast::Cast(const std::string& new_literal) : literal(new_literal) {}
Cast::Cast(const Cast& new_cast) : literal(new_cast.literal) {}
Cast::~Cast() {}
Cast& Cast::operator=(const Cast& new_cast) {
	literal = new_cast.literal;
	return *this;
}

void	Cast::convert(char& res) {
	std::stringstream ss(literal);
	short int tmp;
	if ((ss >> tmp && tmp >= -128 && tmp <= 127)) {
		res = static_cast<char>(tmp);
		if (isprint(res))
			return;
		throw std::invalid_argument("Non displayable");
	}
	throw std::invalid_argument("impossible");
}

void	Cast::convert(int& res) {
	std::stringstream ss(literal);
	if ((ss >> res))
		return;
	throw std::invalid_argument("impossible");
}

void	Cast::convert(float& res) {
	std::stringstream ss(literal);
	if ((ss >> res))
		return;
	if (literal == "inf")
		res = std::numeric_limits<float>::infinity();
	else if (literal == "-inf")
		res = -std::numeric_limits<float>::infinity();
	else if (literal == "nan")
		res = std::numeric_limits<float>::quiet_NaN();
	else
		throw std::invalid_argument("impossible");
}

void	Cast::convert(double& res) {
	std::stringstream ss(literal);
	if ((ss >> res))
		return;
	if (literal == "inf")
		res = std::numeric_limits<double>::infinity();
	else if (literal == "-inf")
		res = -std::numeric_limits<double>::infinity();
	else if (literal == "nan")
		res = std::numeric_limits<double>::quiet_NaN();
	else
		throw std::invalid_argument("impossible");
}
