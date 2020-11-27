#include <string>
#include <iostream>
#include "Bureaucrat.class.hpp"

using BTHE = Bureaucrat::GradeTooHighException;
using BTLE = Bureaucrat::GradeTooLowException;

Bureaucrat::Bureaucrat() : name("nonanme"), grade(150) {}
Bureaucrat::Bureaucrat(const std::string& n, int g) : name(n) {
	if (g < 1)
		throw GradeTooHighException();
	if (g > 150)
		throw GradeTooLowException();
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
		throw GradeTooHighException("Failed increment, grade too high");
	grade--;
}

void		Bureaucrat::decGrade() {
	if (grade + 1 > 150)
		throw GradeTooLowException("Failed decrement, grade too low");
	grade++;
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

//Exception class
BTHE::GradeTooHighException() : myException("Grade shouldn't be higher than 1") {}
BTHE::GradeTooHighException(const char *mes) : myException(mes) {}
BTHE::GradeTooHighException(const GradeTooHighException&) : myException() {}
BTHE& BTHE::operator=(const GradeTooHighException&) {return *this;}
BTHE::~GradeTooHighException() {}

BTLE::GradeTooLowException() : myException("Grade shouldn't be lower than 150") {}
BTLE::GradeTooLowException(const char *mes) : myException(mes) {}
BTLE::GradeTooLowException(const GradeTooLowException&) : myException() {}
BTLE& BTLE::operator=(const GradeTooLowException&) {return *this;}
BTLE::~GradeTooLowException() {}
//Exception class

std::ostream& operator<<(std::ostream &os, const Bureaucrat& br) {
	os << "Bureaucrat " << br.getName()
	   << " with grade " << br.getGrade();
	return os;
}
