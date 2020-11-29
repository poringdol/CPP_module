#include <iostream>
#include "Array.hpp"

using std::cout;
using std::endl;

template<typename T>
void print(T& arr, int size) {
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << " ";
	cout << endl;
}

int main() {
	// test empty array
	Array<int> Arr;
	cout << Arr.size() << endl << endl;

	// test with integer array
	{
		Array<int> Arr(20);
		cout << "Int array size is: " << Arr.size() << endl;

		for (int i = 0; i < 20; i++) {
			Arr[i] = i + 1;
		}
		print(Arr, 20);
	}
	cout << endl;

	// test with double array
	{
		Array<double> Arr(20);
		cout << "Double array size is: " << Arr.size() << endl;

		for (int i = 0; i < 20; i++) {
			Arr[i] = i + 1;
		}
		print(Arr, 20);
	}
	cout << endl;

	// test with string array
	{
		Array<std::string> Arr(10);
		std::string word[10] = {"some","random","words","to","test","arr","class","is","workng","good"};
		cout << "String array size is: " << Arr.size() << endl;

		for (int i = 0; i < 10; i++) {
			Arr[i] = word[i];
		}
		print(Arr, 10);
	}
	cout << endl;

	// test wrong index
	{
		try {
			Array<int> Arr(10);
			Arr[10] = 1;
			cout << "Success" << endl;
		} catch (std::exception) {
			cout << "Wrong index" << endl;
		}
	}
	cout << endl;

	// copy and assignation test
	{

		//copy test
		cout << "COPY TEST" << endl;
		Array<int> Arr(20);

		for (int i = 0; i < 20; i++) {
			Arr[i] = i + 1;
		}
		cout << "First array:" << endl;
		print(Arr, 20);

		// создаем копию через конструктор копирования
		Array<int> copyArr(Arr);
		cout << "Copied array:" << endl;
		print(copyArr, 20);
		cout << endl;

		// в первом массиве увеличиваем значения
		for (int i = 0; i < 20; i++) {
			Arr[i] *= 10;
		}
		cout << "Arrays after changing in one of them" << endl;
		cout << "First array:" << endl;
		print(Arr, 20);
		cout << "Copied array:" << endl;
		print(copyArr, 20);
		cout << endl;

		// assignation test
		cout << "ASSIGNATION TEST" << endl;
		copyArr = Arr;
		cout << "First array:" << endl;
		print(Arr, 20);
		cout << "Copied array:" << endl;
		print(copyArr, 20);
		cout << endl;

		for (int i = 0; i < 20; i++) {
			Arr[i] *= 10;
		}
		cout << "Arrays after changing in one of them" << endl;
		cout << "First array:" << endl;
		print(Arr, 20);
		cout << "Copied array:" << endl;
		print(copyArr, 20);
	}
	cout << endl;

}