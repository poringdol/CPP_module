#pragma once

#include <string>
#include <iostream>
#include "Form.class.hpp"
#include "Bureaucrat.class.hpp"

class PresidentialPardonForm : public Form {

private:
	static int gts;
	static int gte;
	static std::string formName;
	static std::string tree;

	PresidentialPardonForm();
	PresidentialPardonForm& operator=(const PresidentialPardonForm&);

public:
	PresidentialPardonForm(const std::string& target);
	PresidentialPardonForm(const PresidentialPardonForm&);
	~PresidentialPardonForm();

	virtual void execute(Bureaucrat const&) const override;
};
