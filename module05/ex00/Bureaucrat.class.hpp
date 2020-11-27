#pragma once

#include <string>
#include <iostream>

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

	class		GradeTooHighException : public std::exception {
	private:
			const char* message;
	public:
		GradeTooHighException();
		GradeTooHighException(const char *mes);
		const char* what() const throw () override;		// throw() == noexcept(C++11)
	};

	class		GradeTooLowException : public std::exception {
	private:
			const char* message;
	public:
		GradeTooLowException();
		GradeTooLowException(const char *mes);
		const char* what() const throw() override;		// throw() == noexcept(C++11)
	};
};

std::ostream& operator<<(std::ostream &os, const Bureaucrat& br);