#pragma once

#include <string>
#include <iostream>

class Bureaucrat {

private:
	std::string name;
	int	grade;

	Bureaucrat();

public:
	Bureaucrat(const std::string& name, int grade);
	Bureaucrat(const Bureaucrat&);
	~Bureaucrat();

	Bureaucrat& operator=(const Bureaucrat&);

	std::string	getName() const;
	int			getGrade() const;
	void		incGrade();
	void		decGrade();

	class		GradeTooHighException : public std::exception {
	private:
			const char* message;
	public:
		GradeTooHighException(const char *mes);
		const char* what() const throw () override;
	};

	class		GradeTooLowException : public std::exception {
	private:
			const char* message;
	public:
		GradeTooLowException(const char *mes);
		const char* what() const throw () override;
	};
};

std::ostream& operator<<(std::ostream &os, const Bureaucrat& br);