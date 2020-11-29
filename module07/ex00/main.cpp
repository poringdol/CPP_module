#include <iostream>
#include "whatever.hpp"

using std::cout;
using std::endl;
using std::string;

int main() {

	// int test
	{
		int a = 10, b = 20;

		cout << "int 1 before = " << a << endl <<
				"int 2 before = " << b << endl;

		cout << "_min(a, b) = " << _min(a, b) << endl;
		cout << "_max(a, b) = " << _max(a, b) << endl;

		_swap(a, b);
		cout << "int 1 after = " << a << endl <<
				"int 2 after = " << b << endl << endl;
	}

	// char test
	{
		char a = 'A', b = 'Z';

		cout << "char 1 before = " << static_cast<char>(a) << endl <<
				"char 2 before = " << static_cast<char>(b) << endl;
		cout << "_min(a, b) = " << _min(a, b) << endl;
		cout << "_max(a, b) = " << _max(a, b) << endl;

		_swap(a, b);
		cout << "char 1 after = " << static_cast<char>(a) << endl <<
				"char 2 after = " << static_cast<char>(b) << endl << endl;
	}

	// double test
	{
		double a = 10, b = 20;

		cout << "double 1 before = " << a << endl <<
				"double 2 before = " << b << endl;
		cout << "_min(a, b) = " << _min(a, b) << endl;
		cout << "_max(a, b) = " << _max(a, b) << endl;

		_swap(a, b);
		cout << "double 1 after = " << a << endl <<
				"double 2 after = " << b <<endl << endl;
	}

	// string test
	{
		string a = "Hello", b = "World";

		cout << "string 1 before = " << a << endl <<
				"string 2 before = " << b << endl;
		cout << "_min(a, b) = " << _min(a, b) << endl;
		cout << "_max(a, b) = " << _max(a, b) << endl;

		_swap(a, b);
		cout << "string 1 after = " << a << endl <<
				"string 2 after = " << b << endl << endl;
	}

	// Complex type test
	{
		Awesome a(42), b(100);

		cout << "Awesome 1 before = " << a << endl <<
				"Awesome 2 before = " << b << endl;
		cout << "_min(a, b) = " << _min(a, b) << endl;
		cout << "_max(a, b) = " << _max(a, b) << endl;

		_swap(a, b);
		cout << "Awesome 1 after = " << a << endl <<
				"Awesome 2 after = " << b << endl << endl;
	}
}