#include <string>
#include <iostream>
#include <fstream>
#include "Form.class.hpp"
#include "ShrubberyCreationForm.class.hpp"

using SCF = ShrubberyCreationForm;


SCF::ShrubberyCreationForm() : Form() {}
SCF& SCF::operator=(const ShrubberyCreationForm&) {return *this;}

SCF::ShrubberyCreationForm(const std::string& target)
			: Form(formName, gts, gte, target) {}
SCF::ShrubberyCreationForm(const ShrubberyCreationForm& sc)
			: Form(formName, gts, gte, sc.getTarget()) {}
SCF::~ShrubberyCreationForm() {}

void SCF::execute(Bureaucrat const&br) const {
	std::ofstream ofile(getTarget() + "_shrubbery", std::ios::out | std::ios::trunc);
	std::cout << "Bureaucrat " << br.getName() << " executed form "
			  << getName() << " for " << getTarget() << std::endl;
	ofile << tree;
}

int SCF::gts = 145;
int SCF::gte = 137;
std::string SCF::formName = "ShrubberyCreationForm";
std::string SCF::tree = "\
             /\\\n\
            <  >\n\
             \\/\n\
             /\\\n\
            /  \\\n\
           /++++\\\n\
          /  ()  \\\n\
          /      \\\n\
         /~`~`~`~`\\\n\
        /  ()  ()  \\\n\
        /          \\\n\
       /*&*&*&*&*&*&\\\n\
      /  ()  ()  ()  \\\n\
      /              \\\n\
     /++++++++++++++++\\\n\
    /  ()  ()  ()  ()  \\\n\
    /                  \\\n\
   /~`~`~`~`~`~`~`~`~`~`\\\n\
  /  ()  ()  ()  ()  ()  \\\n\
  /*&*&*&*&*&*&*&*&*&*&*&\\\n\
 /                        \\\n\
/,.,.,.,.,.,.,.,.,.,.,.,.,.\\\n\
           |   |\n\
          |`````|\n\
          \\_____/\n";
