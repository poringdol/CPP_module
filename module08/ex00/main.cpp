#include <iostream>
#include <cstdlib>
#include <set>
#include <vector>
#include <list>
#include "easyfind.hpp"

using std::cout;
using std::endl;

template<typename T>
void _print(const T& cont, typename T::iterator it) {
	if (it != cont.end())
		cout << *it << endl;
	else
		cout << "Not found" << endl;
}

int main() {

// Vector test
	cout << "Vector test" << endl;
	std::vector<int> vectCont;
	std::vector<int>::iterator vectIt;

	for (int i = 0; i < 10; i++) {
		vectCont.push_back(i * 10);
	}

	vectIt = easyFind(vectCont, 40);
	_print(vectCont, vectIt);

	vectIt = easyFind(vectCont, 45);
	_print(vectCont, vectIt);
	cout << endl;

// String test
	cout << "String test" << endl;
	std::string str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	std::string::iterator strIt;

	strIt = easyFind(str, 'A');
	_print(str, strIt);

	strIt = easyFind(str, 'a');
	_print(str, strIt);
	cout << endl;

// Set test
	cout << "Set test" << endl;
	std::set<int> setCont(vectCont.begin(), vectCont.end());
	std::set<int>::iterator setIt;

	setIt = easyFind(setCont, 40);
	_print(setCont, setIt);

	setIt = easyFind(setCont, 45);
	_print(setCont, setIt);
	cout << endl;

// List
	cout << "List test" << endl;
	std::list<int> listCont(vectCont.begin(), vectCont.end());
	std::list<int>::iterator listIt;

	listIt = easyFind(listCont, 40);
	_print(listCont, listIt);

	listIt = easyFind(listCont, 45);
	_print(listCont, listIt);
}
