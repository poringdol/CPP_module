#include <string>
#include <iostream>
#include <fstream>
#include "Form.class.hpp"
#include "PresidentialPardonForm.class.hpp"

using PPF = PresidentialPardonForm;

PPF::PresidentialPardonForm() : Form() {}
PPF& PPF::operator=(const PresidentialPardonForm&) {return *this;}

PPF::PresidentialPardonForm(const std::string& target)
			: Form(formName, gts, gte, target) {}
PPF::PresidentialPardonForm(const PresidentialPardonForm& pf)
			: Form(formName, gts, gte, pf.getTarget()) {}
PPF::~PresidentialPardonForm() {}

void PPF::execute(Bureaucrat const&br) const {

    std::cout << "\033[0;32m" << getTarget()
              << " has been pardoned by Zafod Beeblebrox" << "\033[0;0m" << std::endl;

	std::cout << "Bureaucrat " << br.getName()
			  << " executed successful " << getName()
			  << " for " << getTarget() << std::endl;
}

int PPF::gts = 25;
int PPF::gte = 5;
std::string PPF::formName = "PresidentialPardonForm";
