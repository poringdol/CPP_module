#include <string>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <exception>
#include "Bureaucrat.class.hpp"
#include "Form.class.hpp"
#include "ShrubberyCreationForm.class.hpp"
#include "RobotomyRequestForm.class.hpp"
#include "PresidentialPardonForm.class.hpp"
#include "Intern.class.hpp"

int main() {
	using std::cout;
	using std::endl;

	cout << "\n\033[0;35m" << "### Intern CLASS TEST ###\n\n" << "\033[0;0m";

	cout << "Make Shrubbery Creation Form" << endl;
	try {
		Intern intern;
		Form *any = intern.makeForm("Shrubbery Creation", "Marvin");
		cout << *any << endl;

	} catch (std::exception &ex) {
		cout << ex.what() << endl;
	}
	cout << endl;

	cout << "Make Robotomy RequestForm" << endl;
	try {
		Intern intern;
		Form *any = intern.makeForm("Robotomy Request", "Marvin");
		cout << *any << endl;

	} catch (std::exception &ex) {
		cout << ex.what() << endl;
	}
	cout << endl;

	cout << "Make Presidential Pardon Form" << endl;
	try {
		Intern intern;
		Form *any = intern.makeForm("Presidential Pardon", "Marvin");
		cout << *any << endl;

	} catch (std::exception &ex) {
		cout << ex.what() << endl;
	}
	cout << endl;

	cout << "Make Unknown form" << endl;
	try {
		Intern intern;
		Form *any = intern.makeForm("Unknown Form", "Marvin");
		cout << *any << endl;

	} catch (std::exception &ex) {
		cout << ex.what() << endl;
	}
	cout << endl;
}
