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
	private:
		GradeTooHighException() = default;

	public:
		GradeTooHighException(const char *mes);
		GradeTooHighException(const GradeTooHighException&) = default;
		~GradeTooHighException() = default;
	};

	class		GradeTooLowException : public myException {
	protected:
		GradeTooLowException() = default;

	public:
		GradeTooLowException(const char *mes);
		GradeTooLowException(const GradeTooLowException&) = default;
		~GradeTooLowException() = default;
	};
};
// Exception class

std::ostream& operator<<(std::ostream &os, const Bureaucrat& br);
