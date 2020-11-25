#pragma once

#include <string>
#include <iostream>
#include "Form.class.hpp"
#include "Bureaucrat.class.hpp"

class ShrubberyCreationForm : public Form {

private:
	static int gts;
	static int gte;
	static std::string formName;
	static std::string tree;

	ShrubberyCreationForm();
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm&);

public:
	ShrubberyCreationForm(const ShrubberyCreationForm&);
	ShrubberyCreationForm(const std::string& target);
	~ShrubberyCreationForm();

	virtual void execute(Bureaucrat const&) const override;
};
