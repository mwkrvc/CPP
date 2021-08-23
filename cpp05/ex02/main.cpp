# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

int main()
{
	std::cout << "==================================" << std::endl;
	try {
		Bureaucrat bureaucrat("0", 140);
		ShrubberyCreationForm form("tree0");
		std::cout << bureaucrat << std::endl;
		std::cout << form << std::endl;
		form.beSigned(bureaucrat);
		std::cout << form << std::endl;
		form.execute(bureaucrat);
	}
	catch (std::exception & exception) {
		std::cout << exception.what() << std::endl;
	}
	std::cout << "==================================" << std::endl;
	try {
		Bureaucrat bureaucrat("1", 20);
		ShrubberyCreationForm form("tree1");
		std::cout << bureaucrat << std::endl;
		std::cout << form << std::endl;
		form.beSigned(bureaucrat);
		std::cout << form << std::endl;
		form.execute(bureaucrat);
	}
	catch (std::exception & exception) {
		std::cout << exception.what() << std::endl;
	}
	std::cout << "==================================" << std::endl;
	try {
		Bureaucrat bureaucrat("2", 20);
		ShrubberyCreationForm form("tree2");
		std::cout << bureaucrat << std::endl;
		std::cout << form << std::endl;
		form.beSigned(bureaucrat);
		std::cout << form << std::endl;
		bureaucrat.executeForm(form);
	}
	catch (std::exception & exception) {
		std::cout << exception.what() << std::endl;
	}
	std::cout << "==================================" << std::endl;
	try {
		Bureaucrat bureaucrat("3", 20);
		RobotomyRequestForm form("stop1");
		std::cout << bureaucrat << std::endl;
		std::cout << form << std::endl;
		form.beSigned(bureaucrat);
		std::cout << form << std::endl;
		bureaucrat.executeForm(form);
	}
	catch (std::exception & exception) {
		std::cout << exception.what() << std::endl;
	}
	std::cout << "==================================" << std::endl;
	try {
		Bureaucrat bureaucrat("4", 20);
		RobotomyRequestForm form("stop2");
		std::cout << bureaucrat << std::endl;
		std::cout << form << std::endl;
		form.beSigned(bureaucrat);
		std::cout << form << std::endl;
		form.execute(bureaucrat);
	}
	catch (std::exception & exception) {
		std::cout << exception.what() << std::endl;
	}
	std::cout << "==================================" << std::endl;
	try {
		Bureaucrat bureaucrat("5", 150);
		Bureaucrat bureaucrat1("6", 20);
		RobotomyRequestForm form("stop3");
		std::cout << bureaucrat << std::endl;
		std::cout << form << std::endl;
		form.beSigned(bureaucrat1);
		std::cout << form << std::endl;
		form.execute(bureaucrat);
	}
	catch (std::exception & exception) {
		std::cout << exception.what() << std::endl;
	}
	std::cout << "==================================" << std::endl;
	try {
		Bureaucrat bureaucrat("7", 150);
		PresidentialPardonForm form("pr1");
		std::cout << bureaucrat << std::endl;
		std::cout << form << std::endl;
		form.execute(bureaucrat);
	}
	catch (std::exception & exception) {
		std::cout << exception.what() << std::endl;
	}
	std::cout << "==================================" << std::endl;
	try {
		Bureaucrat bureaucrat("8", 20);
		PresidentialPardonForm form("pr2");
		std::cout << bureaucrat << std::endl;
		std::cout << form << std::endl;
		form.beSigned(bureaucrat);
		std::cout << form << std::endl;
		form.execute(bureaucrat);
	}
	catch (std::exception & exception) {
		std::cout << exception.what() << std::endl;
	}
	std::cout << "==================================" << std::endl;
	try {
		Bureaucrat bureaucrat("9", 1);
		PresidentialPardonForm form("pr3");
		std::cout << bureaucrat << std::endl;
		std::cout << form << std::endl;
		form.beSigned(bureaucrat);
		std::cout << form << std::endl;
		form.execute(bureaucrat);
	}
	catch (std::exception & exception) {
		std::cout << exception.what() << std::endl;
	}
}