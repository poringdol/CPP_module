#pragma once


template<typename T>
class Array {
private:
	T* array;
	int arrSize;

public:
	Array();
	Array(unsigned int);
	Array(const Array&);
	Array& operator=(const Array&);
	T& operator[](int idx);
	~Array();

	int size();

};

#include "Array.tpp"
