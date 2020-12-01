#include <stdexcept>
#include <algorithm>
#include <numeric>
#include <iterator>
#include "MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack() : std::stack<T>() {}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack& toCopy) : std::stack<T>(toCopy.c) {}

template<typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T>& toCopy) {
	this->c = toCopy.c;
	return *this;
}

template<typename T>
MutantStack<T>::~MutantStack() {}

// Iterator class

template<typename T>
MutantStack<T>::iterator::iterator(T *new_p) : p(new_p) {}

template<typename T>
MutantStack<T>::iterator::iterator(const iterator& it) : p(it.p) {}

template<typename T>
bool MutantStack<T>::iterator::operator!=(iterator const& other) const {
	return p != other.p;
}

template<typename T>
bool MutantStack<T>::iterator::operator==(iterator const& other) const {
	return p == other.p;
}

template<typename T>
T& MutantStack<T>::iterator::operator*() const {
	return *p;
}

template<typename T>
typename MutantStack<T>::iterator& MutantStack<T>::iterator::operator++() {
	++p;
	return *this;
}

template<typename T>
typename MutantStack<T>::iterator& MutantStack<T>::iterator::operator--() {
	--p;
	return *this;
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {
	return typename MutantStack<T>::iterator(&this->top() - (this->size() - 1));
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {
	return typename MutantStack<T>::iterator(&this->top() + 1);
}
