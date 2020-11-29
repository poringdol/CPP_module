#include <iostream>
#include "iter.hpp"

using std::cout;
using std::endl;
using std::string;

template<typename T>
void print(T i) {
	std::cout << i << " ";
}

template<typename T>
void increment(T& i) {
	i++;
}

int main() {

	int intArr[10] = {1,2,3,4,5,6,7,8,9,0};
	iter(intArr, 10, print);
	cout << endl;
	iter(intArr, 10, increment);
	iter(intArr, 10, print);
	cout << endl << endl;

	char charArr[] = "ABCDEFGHIJKLMNO";
	iter(charArr, 15, print);
	cout << endl;
	iter(charArr, 15, increment);
	iter(charArr, 15, print);
	cout << endl << endl;

	string strArr[10] = {"123","456","stroka","blabla","uhodi","6","7","8","9","0"};
	iter(strArr, 10, print);
	cout << endl;
}
