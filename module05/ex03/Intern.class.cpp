#include <string>
#include <iostream>
#include "Intern.class.hpp"

Intern::Intern() : newForm(NULL) {}
Intern::Intern(const Intern& br) : newForm(NULL) {(void)br;}
Intern::~Intern() {
	if (newForm)
		delete newForm;
	newForm = NULL;
}

Intern& Intern::operator=(const Intern& br) {
	(void)br;
	return (*this);
}

Form* Intern::makeForm(const std::string& formName, const std::string& target) {
	for (int i = 0; i < NUM_FORM; i++) {
		if (formName == arrayForm[i]) {
			newForm = (this->*arrrayMakeForm[i])(target);
			return newForm;
		}
	}
	throw myException("Form creation failed. Unknown type form");
}

Form* Intern::makeShrubbery(const std::string& target) {
	return new ShrubberyCreationForm(target);
}

Form* Intern::makeRobotomy(const std::string& target) {
	return new RobotomyRequestForm(target);
}

Form* Intern::makePresidential(const std::string& target) {
	return new PresidentialPardonForm(target);
}
