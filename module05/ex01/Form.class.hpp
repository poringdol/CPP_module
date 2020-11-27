#pragma once

#include <string>
#include <iostream>
#include "myException.class.hpp"
#include "Bureaucrat.class.hpp"

class Bureaucrat;

class Form {

private:
	const std::string name;
	const int gradeToSign;
	const int gradeToExec;
	bool isSigned;

	Form();
	Form& operator=(const Form&);

public:
	Form(const std::string& name, int gts, int gte);
	Form(const Form&);
	~Form();

	std::string	getName() const;
	int			getGradeToSign() const;
	int			getGradeToExec() const;
	bool		getIsSigned() const;
	void		beSigned(const Bureaucrat&);

// Exception classes
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
// Exception classes
};

std::ostream& operator<<(std::ostream &os, const Form& form);