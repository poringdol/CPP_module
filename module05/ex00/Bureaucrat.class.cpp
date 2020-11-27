// #include <exception>
#include <string>
#include <exception>
#include "Bureaucrat.class.hpp"

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
		throw GradeTooHighException("Failed increment");
}

void		Bureaucrat::decGrade() {
	if (grade + 1 > 150)
		throw GradeTooLowException("Failed decrement");
}

Bureaucrat::GradeTooHighException::GradeTooHighException()
            : std::exception(), message("Grade shouldn't be higher than 1") {}

Bureaucrat::GradeTooHighException::GradeTooHighException(const char *mes)
            : std::exception(), message(mes) {}

const char* Bureaucrat::GradeTooHighException::what() const throw () {return message;}

Bureaucrat::GradeTooLowException::GradeTooLowException()
			: std::exception(), message("Grade shouldn't be lower than 150") {}

Bureaucrat::GradeTooLowException::GradeTooLowException(const char *mes)
			: std::exception(), message(mes) {}

const char* Bureaucrat::GradeTooLowException::what() const throw () {return message;}

std::ostream& operator<<(std::ostream &os, const Bureaucrat& br) {
	os << "Bureaucrat " << br.getName()
	   << " with grade " << br.getGrade();
	return os;
}
