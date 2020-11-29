#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>
#include "Cast.hpp"
#include "StaticCast.hpp"

using std::cout;
using std::endl;

template<typename T>
void	convert(std::string literal, T& type) {
	std::stringstream ss(literal);
	if ((ss >> type) && ss.eof())
		return;
	else if (literal == "inf")
		type = std::numeric_limits<T>::infinity();
	else if (literal == "-inf")
		type = -std::numeric_limits<T>::infinity();
	else if (literal == "nan")
		type = std::numeric_limits<T>::quiet_NaN();
	else
		throw std::invalid_argument("impossible");
}


int main(int ac, char **av) {
	if (ac != 2) {
		cout << "Usage: ./cast <param>" << endl;
		return 1;
	}

	std::string literal = av[1];

// TEST CAST CLASS

	Cast cast_literal(literal);

	cout << "Cast class" << endl;	
	cout << "char: ";
	try {
		char c = 0;
		cast_literal.convert(c);

		cout << c << endl;
	} 
	catch (std::exception &ex) {
		cout << ex.what() << endl;
	}

	cout << "int: ";
	try {
		int i = 0.;
		cast_literal.convert(i);

		cout << i << endl;
	} 
	catch (std::exception &ex) {
		cout << ex.what() << endl;
	}

	cout << "float: ";
	try {
		float f = 0.0f;
		cast_literal.convert(f);

		cout << std::fixed << std::setprecision(1) << f << "f" << endl;
	} 
	catch (std::exception &ex) {
		cout << ex.what() << endl;
	}

	cout << "double: ";
	try {
		double d = 0.0;
		cast_literal.convert(d);
		cout << std::fixed << std::setprecision(1) << d << endl;
	} 
	catch (std::exception &ex) {
		cout << ex.what() << endl;
	}

// TEST STATICCAST CLASS

	StaticCast static_cast_lit(av[1]);

	cout << endl << "StaticCast class" << endl;	
	cout << "char: ";
	try {
		char c = 0;
		static_cast_lit.convert(c);

		cout << c << endl;
	} 
	catch (std::exception &ex) {
		cout << ex.what() << endl;
	}

	cout << "int: ";
	try {
		int i = 0.;
		static_cast_lit.convert(i);

		cout << i << endl;
	} 
	catch (std::exception &ex) {
		cout << ex.what() << endl;
	}

	cout << "float: ";
	try {
		float f = 0.0f;
		static_cast_lit.convert(f);

		cout << std::fixed << std::setprecision(1) << f << "f" << endl;
	} 
	catch (std::exception &ex) {
		cout << ex.what() << endl;
	}

	cout << "double: ";
	try {
		double d = 0.0;
		static_cast_lit.convert(d);
		cout << std::fixed << std::setprecision(1) << d << endl;
	} 
	catch (std::exception &ex) {
		cout << ex.what() << endl;
	}
}