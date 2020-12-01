#include <iostream>
#include <set>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "span.hpp"

using std::cout;
using std::endl;

template<typename T>
void _print(const T& cont, typename T::iterator it) {
	if (it != cont.end())
		cout << *it << endl;
	else
		cout << "Not found" << endl;
}

int main()
{
	srand(time(NULL));

	Span sp = Span(5);

	// Test ftom subject
	try {
		sp.addNumber(5);
	} catch (std::exception &ex) {
		cout << ex.what() << endl;
	}
	try {
		cout << sp.shortestSpan() << endl;
	} catch (std::exception &ex) {
		cout << ex.what() << endl;
	}
	try {
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		cout << sp.shortestSpan() << endl;
		cout << sp.longestSpan() << endl;
	} catch (std::exception &ex) {
		cout << ex.what() << endl;
	}
	cout << endl;

	// My test
	std::set<unsigned> random;
	for (int i = 0; i < 100; i++) {
		random.insert(rand());
	}
	sp.addSpan(random);

	cout << sp.shortestSpan() << endl;
	cout << sp.longestSpan() << endl;

	cout << "Min value is " << sp.minNum() << endl;
	cout << "Max value is " << sp.maxNum() << endl;
}
