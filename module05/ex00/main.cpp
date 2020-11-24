#include <string>
#include <iostream>
#include <exception>
#include "Bureaucrat.class.hpp"

int main() {

	try {
		Bureaucrat br2("Chiter", 0);
		std::cout << br2 << " created" << std::endl;
	} catch (std::exception& ex) {
		std::cout << ex.what() << std::endl << std::endl;
	}

	try {
		Bureaucrat br3("Chiter", 200);
		std::cout << br3 << " created" << std::endl;
	} catch (std::exception& ex) {
		std::cout << ex.what() << std::endl << std::endl;
	}

	try {
		Bureaucrat br4("Boris", 150);
		std::cout << br4 << " created" << std::endl;
		br4.decGrade();
	} catch (std::exception& ex) {
		std::cout << ex.what() << std::endl << std::endl;
	}

	try {
		Bureaucrat br5("Boris", 1);
		std::cout << br5 << " created" << std::endl;
		br5.incGrade();
	} catch (std::exception& ex) {
		std::cout << ex.what() << std::endl << std::endl;
	}
}