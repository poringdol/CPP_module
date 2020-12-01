#pragma once

#include <stack>

template<typename T>
class MutantStack : public std::stack<T> {

public:
	MutantStack();
	MutantStack(const MutantStack&);
	MutantStack& operator=(const MutantStack&);
	~MutantStack();

	class iterator: public std::iterator<std::input_iterator_tag, T> {

	private:
		T* p;
	
	public:
		iterator(T* p);
		iterator(const iterator &it);

		bool operator!=(iterator const& other) const;
		bool operator==(iterator const& other) const;
		// typename iterator::reference operator*() const;
		T& operator*() const;
		iterator& operator++();
		iterator& operator--();
	};

	iterator begin();
	iterator end();
};

#include "MutantStack.cpp"