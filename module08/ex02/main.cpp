#include <iostream>
#include <stack>
#include <list>
#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	// [5]
	mstack.push(17);
	// [5] [17]

	std::cout << "Stack top after push(5), push(17) is - " << mstack.top() << std::endl;

	// [5] pop-[17]
	mstack.pop();
	// [5]
	std::cout << "Stack top after pop() is - " << mstack.top() << std::endl;

	std::cout << "Stack size is - " << mstack.size() << std::endl;

	mstack.push(3);
	// [5] [3]
	mstack.push(15);
	// [5] [3] [15]
	mstack.push(737);
	// [5] [3] [15] [737]
	mstack.push(0);
	// [5] [3] [15] [737] [0]

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	// begin [5] [3] [15] [737] [0] end

	++it;
	--it;

	std::cout << "Now stack size is - " << mstack.size() <<
				 " and values inside are - ";
	while (it != ite)
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << std::endl << std::endl;

	std::cout << "Copy constructor test with default stack" << std::endl;
	std::stack<int> s(mstack);
	while (!s.empty())
	{
		std::cout << s.top() << " ";
		s.pop();
	}
	std::cout << std::endl << "Default type stack size is - " << s.size() << std::endl;
	std::cout << "My type stack size is - " << mstack.size() << std::endl;

	std::cout << std::endl << "Assignation constructor test with default stack" << std::endl;
	std::cout << "Default type stack size before assignation - " << s.size() << std::endl;
	s = mstack;
	std::cout << "Default type stack size after assignation - " << s.size() << std::endl;
	return 0;
}
