#include <string>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <exception>
#include "Bureaucrat.class.hpp"
#include "Form.class.hpp"
#include "ShrubberyCreationForm.class.hpp"
// #include "RobotomyRequestForm.class.hpp"
// #include "PresidentialPardonForm.class.hpp"

int main() {
	using std::cout;
	using std::endl;

	cout << "\n\033[0;35m" << "### ShrubberyCreationForm CLASS TEST ###\n\n" << "\033[0;0m";

	try {
		cout << "Case: Burecraut with grade 150 can't sign the form" << endl;
		
		ShrubberyCreationForm form("Garden");
		Bureaucrat br("Boris", 150);

		cout << form << endl;
		br.signForm(form);
		cout << form << endl;
		br.executeForm(form);
	} catch (std::exception &ex) {
		cout << ex.what() << endl;
	}
	cout << endl;

	try {
		cout << "Case: Burecraut with grade 140 can sign, but cant't execute the form" << endl;
		
		ShrubberyCreationForm form("Garden");
		Bureaucrat br("Boris", 140);

		cout << form << endl;
		br.signForm(form);
		cout << form << endl;
		br.executeForm(form);
	} catch (std::exception &ex) {
		cout << ex.what() << endl;
	}
	cout << endl;

	try {
		cout << "Case: Burecraut with grade 100 can sign and execute the form" << endl;
		
		ShrubberyCreationForm form("Garden");
		Bureaucrat br("Boris", 100);

		cout << form << endl;
		br.signForm(form);
		cout << form << endl;
		br.executeForm(form);
		std::string buf;
		std::ifstream ifile("Garden_shrubbery");
		while (getline(ifile, buf)) {
			cout << "\033[0;32m" << buf << "\033[0;0m" << endl;
		}
	} catch (std::exception &ex) {
		cout << ex.what() << endl;
	}
	cout << endl;

	// cout << "\n\033[0;35m" << "### RobotomyRequestForm CLASS TEST ###\n\n" << "\033[0;0m";

	// try {
	// 	cout << "Case: Burecraut with grade 70 can sign and execute the form" << endl;
		
	// 	RobotomyRequestForm form("RoboForm");
	// 	Bureaucrat br("Boris", 70);

	// 	cout << form << endl;
	// 	br.signForm(form);
	// 	cout << form << endl;
	// 	br.executeForm(form);
	// } catch (std::exception &ex) {
	// 	cout << ex.what() << endl;
	// }
	// cout << endl;

	// try {
	// 	cout << "Case: Burecraut with grade 40 can sign and execute the form" << endl;
		
	// 	RobotomyRequestForm form("RoboForm");
	// 	Bureaucrat br("Boris", 40);

	// 	cout << form << endl;
	// 	br.signForm(form);
	// 	cout << form << endl;
	// 	br.executeForm(form);
	// } catch (std::exception &ex) {
	// 	cout << ex.what() << endl;
	// }
	// cout << endl;

	// cout << "\033[0;35m" << "### PresidentialPardonForm CLASS TEST ###\n\n" << "\033[0;0m";

	// try {
	// 	cout << "Case: Burecraut with grade 20 can sign and execute the form" << endl;
		
	// 	PresidentialPardonForm form("PresPardon");
	// 	Bureaucrat br("Boris", 20);

	// 	cout << form << endl;
	// 	br.signForm(form);
	// 	cout << form << endl;
	// 	br.executeForm(form);
	// } catch (std::exception &ex) {
	// 	cout << ex.what() << endl;
	// }
	// cout << endl;

	// try {
	// 	cout << "Case: Try execute usigned form" << endl;
		
	// 	PresidentialPardonForm form("PresPardon");
	// 	Bureaucrat br("Boris", 5);

	// 	cout << form << endl;
	// 	br.executeForm(form);
	// } catch (std::exception &ex) {
	// 	cout << ex.what() << endl;
	// }

	// try {
	// 	cout << "Case: Burecraut with grade 5 can sign and execute the form" << endl;
		
	// 	PresidentialPardonForm form("PresPardon");
	// 	Bureaucrat br("Boris", 5);

	// 	cout << form << endl;
	// 	br.signForm(form);
	// 	cout << form << endl;
	// 	br.executeForm(form);
	// } catch (std::exception &ex) {
	// 	cout << ex.what() << endl;
	// }
}
