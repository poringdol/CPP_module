#include <string>
#include <iostream>
#include <fstream>
#include <unistd.h>
#include "Form.class.hpp"
#include "RobotomyRequestForm.class.hpp"

using RRF = RobotomyRequestForm;


RRF::RobotomyRequestForm() : Form() {}
RRF& RRF::operator=(const RobotomyRequestForm&) {return *this;}

RRF::RobotomyRequestForm(const std::string& target)
			: Form(formName, gts, gte, target) {}
RRF::RobotomyRequestForm(const RobotomyRequestForm& rr)
			: Form(formName, gts, gte, rr.getTarget()) {}
RRF::~RobotomyRequestForm() {}

void RRF::execute(Bureaucrat const&br) const {
    
    srand(time(0));
	for (int i = 0; i < 10; i++) {
		int n = rand() % 15;
		if (n == 14) {
			std::cout << "\033[0;31m" << "Robotomizing failure" << "\033[0;0m" << std::endl;
			usleep(1000000);
			return;
		}
		std::cout << "SKREEEK BRAAAAWN RROOAARR . . . . . . " << (i + 1) * 10 << "% complete" << std::endl;
		usleep(300000);
	}
    std::cout << "\033[0;32m" << "Robotomizing successful!" << "\033[0;0m" << std::endl;

    std::cout << "Bureaucrat " << br.getName()
			  << " executed successful " << getName()
			  << " for " << getTarget() << std::endl;
	usleep(1000000);
}

int RRF::gts = 72;
int RRF::gte = 45;
std::string RRF::formName = "RobotomyRequestForm";
