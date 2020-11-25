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
	RobotomyRequestForm(const RobotomyRequestForm&);
	RobotomyRequestForm(const std::string& target);
	~RobotomyRequestForm();

	virtual void execute(Bureaucrat const&) const override;
};
