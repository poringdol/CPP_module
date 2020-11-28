#include <cstdlib>
#include <ctime>
#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* makeA() {return new A;}
Base* makeB() {return new B;}
Base* makeC() {return new C;}

typedef Base *(*Funcs)();

Base* generate (void) {
	srand(time(0));

	Funcs funcs[3] = {makeA, makeB, makeC};  // Base *(*funcs[3])() = {makeA, makeB, makeC}; если без typedef-a
	
	Base *res = funcs[rand() % 3]();
	return res;
}

void identify_from_pointer(Base* p) {
	A *a = dynamic_cast<A*>(p);
	B *b = dynamic_cast<B*>(p);
	C *c = dynamic_cast<C*>(p);

	if(a)
		std::cout << "A" << std::endl;
	else if(b)
		std::cout << "B" << std::endl;
	else if(c)
		std::cout << "C" << std::endl;
}

void identify_from_reference( Base& p) {
	try {
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A" << std::endl;
	} catch (std::bad_cast &ex) {(void)ex;}

	try {
		B &b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "B" << std::endl;
	} catch (std::bad_cast &ex) {(void)ex;}

	try {
		C &c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "C" << std::endl;
	} catch (std::bad_cast &ex) {(void)ex;}
}

int main() {
	Base *base = generate();

	std::cout << "Type is " << base->name << std::endl;
	identify_from_pointer(base);
	identify_from_reference(*base);
}
