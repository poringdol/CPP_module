#include <exception>
#include "Array.hpp"

template<typename T>
Array<T>::Array() : arrSize(0) {array = new T[0]();}
	
template<typename T>
Array<T>::Array(unsigned int size) : arrSize(size) {
	array = new T[size]();
}

template<typename T>
Array<T>::Array(const Array& toCopy) : array(NULL) {
	*this = toCopy;
}

template<typename T>
Array<T>& Array<T>::operator=(const Array<T>& toCopy) {
	if (array)
		delete[] array;
	arrSize = toCopy.arrSize;
	array = new T[arrSize]();
	for (int i = 0; i < arrSize; i++) {
		array[i] = toCopy.array[i];
	}
	return *this;
}

template<typename T>
T& Array<T>::operator[](int i) {
	if (i >= arrSize)
		throw std::exception();
	return array[i];
}

template<typename T>
Array<T>::~Array() {
	delete[] array;
}

template<typename T>
int Array<T>::size() {return arrSize;}

