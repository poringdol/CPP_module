#pragma once

#include <string>
#include <iostream>
#include "Form.class.hpp"
#include "Bureaucrat.class.hpp"

class RobotomyRequestForm : public Form {

private:
	static int gts;
	static int gte;
	static std::string formName;
	static std::string tree;

	RobotomyRequestForm();
	RobotomyRequestForm& operator=(const RobotomyRequestForm&);

public:
	RobotomyRequestForm(const std::string& target);
	RobotomyRequestForm(const RobotomyRequestForm&);
	~RobotomyRequestForm();

	virtual void execute(Bureaucrat const&) const override;
};
