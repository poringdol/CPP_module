#pragma once

#include <string>
#include <functional>
#include "myException.class.hpp"
#include "Form.class.hpp"
#include "ShrubberyCreationForm.class.hpp"
#include "RobotomyRequestForm.class.hpp"
#include "PresidentialPardonForm.class.hpp"

#define NUM_FORM 3

class Intern : public myException {

private:
	Form* newForm;
	std::string arrayForm[NUM_FORM] = {
			"Shrubbery Creation",
			"Robotomy Request",
			"Presidential Pardon"
	};
	Form* (Intern::*arrrayMakeForm[NUM_FORM])(const std::string&) = {
			&Intern::makeShrubbery,
			&Intern::makeRobotomy,
			&Intern::makePresidential
	};

	Intern(const Intern&);
	Intern& operator=(const Intern&);

public:
	Intern();
	~Intern();

	Form* makeForm(const std::string& formName, const std::string& target);
	Form* makeShrubbery(const std::string& target);
	Form* makeRobotomy(const std::string& target);
	Form* makePresidential(const std::string& target);
};
