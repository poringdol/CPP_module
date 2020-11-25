#include <string>
#include <iostream>
#include <exception>
#include "Bureaucrat.class.hpp"
#include "Form.class.hpp"

int main() {

	std::cout << "### BUREAUCRAT CLASS TEST ###\n\n";

	std::cout << "Try to create bureaucrat with grade 0" << std::endl;
	try {
		Bureaucrat br2("Chiter", 0);
		std::cout << br2 << " created" << std::endl;
	} catch (std::exception& ex) {
		std::cout << ex.what() << std::endl << std::endl;
	}

	std::cout << "Try to create bureaucrat with grade 200" << std::endl;
	try {
		Bureaucrat br3("Chiter", 200);
		std::cout << br3 << " created" << std::endl;
	} catch (std::exception& ex) {
		std::cout << ex.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "Try to create bureaucrat with grade 150" << std::endl;
	try {
		Bureaucrat br4("Boris", 150);
		std::cout << br4 << " created" << std::endl;

		Bureaucrat br4_1(br4);
		std::cout << "Copy of " << br4_1 << " created" << std::endl << std::endl;
		std::cout << "Try to decrement 150 grade" << std::endl;
		br4.decGrade();
	} catch (std::exception& ex) {
		std::cout << ex.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "Try to create bureaucrat with grade 1" << std::endl;
	try {
		Bureaucrat br5("Boris", 1);
		std::cout << br5 << " created" << std::endl << std::endl;
		std::cout << "Try to increment 1 grade" << std::endl;
		br5.incGrade();
	} catch (std::exception& ex) {
		std::cout << ex.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "### FORM CLASS TEST ###\n\n";

	try {
		std::cout << "Try to create form with 0 'grade to sign'" << std::endl;
		Form form("'Empty Blank'", 0, 1);
		std::cout << form << std::endl;
	} catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		std::cout << "Try to create form with 200 'grade to exec'" << std::endl;
		Form form("'Empty Blank'", 1, 200);
		std::cout << form << std::endl;
	} catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		std::cout << "Try to create form with 100 'grade to sign' and 100 'grade to exec'" << std::endl;
		Form form("'Empty Blank'", 100, 100);
		std::cout << form << std::endl;
	} catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		std::cout << "Try to sign form with 100 'grade to sign' by burecraut with grade 110" << std::endl;
		Form form("'Empty Blank'", 100, 100);
		Bureaucrat br("Boris", 110);
		br.signForm(form);
	} catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		std::cout << "Try to sign form with 100 'grade to sign' by burecraut with grade 90" << std::endl;
		
		Form form("'Empty Blank'", 100, 100);
		Bureaucrat br("Boris", 90);

		std::cout << form << std::endl;
		br.signForm(form);
		std::cout << form << std::endl;
	} catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
}