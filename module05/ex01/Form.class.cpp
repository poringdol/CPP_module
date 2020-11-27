#include <string>
#include "Form.class.hpp"

using FTHE = Form::GradeTooHighException;
using FTLE = Form::GradeTooLowException;

Form::Form() 	: name(""), gradeToSign(0),
			   	  gradeToExec(0), isSigned(0) {}

Form::Form(const std::string& n, int gts, int gte) 
				: name(n), gradeToSign(gts),
			      gradeToExec(gte), isSigned(0) {
	if (getGradeToSign() < 1)
		throw GradeTooHighException("'Grade to sign' shouldn't be higher than 1");
	if (getGradeToExec() < 1)
		throw GradeTooHighException("'Grade to exec' shouldn't be higher than 1");
	if (getGradeToSign()  > 150)
		throw GradeTooLowException("'Grade to sign' shouldn't be lower than 150");
	if (getGradeToExec()  > 150)
		throw GradeTooLowException("'Grade to exec' shouldn't be lower than 150");
}

Form::Form(const Form& f)
				: name(f.name), gradeToSign(f.gradeToSign),
			      gradeToExec(f.gradeToExec), isSigned(f.isSigned) {}

Form& Form::operator=(const Form& form) {
	(void)form;
	return *this;
}

Form::~Form() {}

std::string	Form::getName() const {return name;}
int			Form::getGradeToSign() const {return gradeToSign;}
int			Form::getGradeToExec() const {return gradeToExec;}
bool		Form::getIsSigned() const {return isSigned;}

void		Form::beSigned(const Bureaucrat& br) {
	if (br.getGrade() <= getGradeToSign())
		isSigned = 1;
	else
		throw (GradeTooLowException("Grade is to low to sign the form"));
}

//Exception class
FTHE::GradeTooHighException() : myException("Grade shouldn't be higher than 1") {}
FTHE::GradeTooHighException(const char *mes) : myException(mes) {}
FTHE::GradeTooHighException(const FTHE&) : myException() {}
FTHE& FTHE::operator=(const FTHE&) {return *this;}
FTHE::~GradeTooHighException() {}

FTLE::GradeTooLowException() : myException("Grade shouldn't be lower than 150") {}
FTLE::GradeTooLowException(const char *mes) : myException(mes) {}
FTLE::GradeTooLowException(const GradeTooLowException&) : myException() {}
FTLE& FTLE::operator=(const GradeTooLowException&) {return *this;}
FTLE::~GradeTooLowException() {}
//Exception class

std::ostream& operator<<(std::ostream &os, const Form& form) {
	os << "Form " << form.getName() << " is required "
	   << form.getGradeToSign() << " grade for signing and "
	   << form.getGradeToExec() << " grade for executing and now it is "
	   << (form.getIsSigned() ? "signed" : "not signed");
	return os;
}
