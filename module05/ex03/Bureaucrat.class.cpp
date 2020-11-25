#include <string>
#include <iostream>
#include "Bureaucrat.class.hpp"

Bureaucrat::Bureaucrat() : name("nonanme"), grade(150) {}
Bureaucrat::Bureaucrat(const std::string& n, int g) : name(n) {
	if (g < 1)
		throw GradeTooHighException("Grade should be lower than 1");
	if (g > 150)
		throw GradeTooLowException("Grade should be higher than 150");
	grade = g;
}
Bureaucrat::Bureaucrat(const Bureaucrat& br) : Bureaucrat(br.name, br.grade) {}
Bureaucrat::~Bureaucrat() {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& br) {
	grade = br.grade;
	return (*this);
}

std::string	Bureaucrat::getName() const {return name;}

int			Bureaucrat::getGrade() const {return grade;}

void		Bureaucrat::incGrade() {
	if (grade - 1 < 1)
		throw GradeTooHighException("Failed increment. Grade should be lower than 1");
}

void		Bureaucrat::decGrade() {
	if (grade + 1 > 150)
		throw GradeTooLowException("Failed decrement. Grade should be higher than 150");
}

void		Bureaucrat::signForm(Form& form) {
	try {
		form.beSigned(*this);
		std::cout << getName() << " signs " << form.getName() << std::endl;

	} catch (std::exception &ex) {
		std::cout << getName() << " cannot sign " << form.getName() << " because:" << std::endl;
		std::cout << ex.what() << std::endl;
	}
}

void		Bureaucrat::executeForm(Form const& form) {
	form.beExecuted(*this);
}

//Exception class
Bureaucrat::GradeTooHighException::
			GradeTooHighException(const char *mes) : myException(mes) {}

Bureaucrat::GradeTooLowException::
			GradeTooLowException(const char *mes) : myException(mes) {}
//Exception class

std::ostream& operator<<(std::ostream &os, const Bureaucrat& br) {
	os << "Bureaucrat " << br.getName()
	   << " with grade " << br.getGrade();
	return os;
}
