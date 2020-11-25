#include <string>
#include "Form.class.hpp"

using GTH = Form::GradeTooHighException;
using GTL = Form::GradeTooLowException;


Form::Form() 	: name("unknown form"), gradeToSign(0),
			   	  gradeToExec(0), isSigned(0) {}

Form::Form(const std::string& n, int gts, int gte, const std::string& t)
				: name(n),
				  gradeToSign(gts),
			      gradeToExec(gte),
				  isSigned(0),
				  target(t)
{
	if (getGradeToSign() < 1)
		throw GTH("'Grade to sign' should be lower than 1");
	if (getGradeToExec() < 1)
		throw GTH("'Grade to exec' should be lower than 1");
	if (getGradeToSign()  > 150)
		throw GTL("'Grade to sign' should be higher than 150");
	if (getGradeToExec()  > 150)
		throw GTL("'Grade to exec' should be higher than 150");
}

Form::Form(const Form& f)
				: name(f.name),
				  gradeToSign(f.gradeToSign),
			      gradeToExec(f.gradeToExec),
				  isSigned(f.isSigned), 
				  target(f.target) {}

Form& Form::operator=(const Form& form) {
	(void)form;
	return *this;
}

Form::~Form() {}

std::string	Form::getName() const {return name;}
int			Form::getGradeToSign() const {return gradeToSign;}
int			Form::getGradeToExec() const {return gradeToExec;}
bool		Form::getIsSigned() const {return isSigned;}
std::string	Form::getTarget() const {return target;}

void		Form::beSigned(const Bureaucrat& br) {
	if (br.getGrade() <= getGradeToSign())
		isSigned = 1;
	else
		throw (GTL("Grade is to low to sign the form"));
}

void		Form::beExecuted(const Bureaucrat& br) const {
	if (getIsSigned() && br.getGrade() <= getGradeToExec())
		execute(br);
	else if (!getIsSigned()) {
		throw (GTL("Execute failure. Form is not signed"));
	} else {
		throw (GTL("Execute failure. Grade is to low to exec the form"));
	}
}

GTH::GradeTooHighException(const char *mes) : myException(mes) {}

GTL::GradeTooLowException(const char *mes) : myException(mes) {}

std::ostream& operator<<(std::ostream &os, const Form& form) {
	os << "Form " << form.getName() << " is required "
	   << form.getGradeToSign() << " grade for signing and "
	   << form.getGradeToExec() << " grade for executing and now it is "
	   << (form.getIsSigned() ? "signed" : "not signed");
	return os;
}
