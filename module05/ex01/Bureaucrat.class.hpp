#pragma once

#include <string>
#include <iostream>
#include "myException.class.hpp"
#include "Form.class.hpp"

class Form;

class Bureaucrat {

private:
	const std::string name;
	int	grade;

	Bureaucrat();
	Bureaucrat& operator=(const Bureaucrat&);

public:
	Bureaucrat(const std::string& name, int grade);
	Bureaucrat(const Bureaucrat&);
	~Bureaucrat();

	std::string	getName() const;
	int			getGrade() const;
	void		incGrade();
	void		decGrade();
	void		signForm(Form&);

// Exception class
	class		GradeTooHighException : public myException {

	public:
		GradeTooHighException();
		GradeTooHighException(const char *mes);
		GradeTooHighException(const GradeTooHighException&);
		GradeTooHighException& operator=(const GradeTooHighException&);
		~GradeTooHighException();
	};

	class		GradeTooLowException : public myException {

	public:
		GradeTooLowException();
		GradeTooLowException(const char *mes);
		GradeTooLowException(const GradeTooLowException&);
		GradeTooLowException& operator=(const GradeTooLowException&);
		~GradeTooLowException();
	};
};
// Exception class

std::ostream& operator<<(std::ostream &os, const Bureaucrat& br);
