# include "Bureaucrat.hpp"

int main()
{
	std::cout << "==================================" << std::endl;
	try {
		Bureaucrat bureaucrat("1", 50);
		Form form("1", 0, 0);
	}
	catch (std::exception &exception) {
		std::cout << exception.what() << std::endl;
	}
	std::cout << "==================================" << std::endl;
	try {
		Bureaucrat bureaucrat("2", 50);
		Form form("2", 151, 151);
	}
	catch (std::exception &exception) {
		std::cout << exception.what() << std::endl;
	}
	std::cout << "==================================" << std::endl;
	try {
		Bureaucrat bureaucrat("3", 50);
		Form form("3", 60, 151);
	}
	catch (std::exception &exception) {
		std::cout << exception.what() << std::endl;
	}
	std::cout << "==================================" << std::endl;
	try {
		Bureaucrat bureaucrat("4", 50);
		Form form("4", 151, 60);
	}
	catch (std::exception &exception) {
		std::cout << exception.what() << std::endl;
	}
	std::cout << "==================================" << std::endl;
	try {
		Bureaucrat bureaucrat("5", 50);
		Form form("5", 40, 40);
		form.beSigned(bureaucrat);
	}
	catch (std::exception &exception) {
		std::cout << exception.what() << std::endl;
	}
	std::cout << "==================================" << std::endl;
	try {
		Bureaucrat bureaucrat("6", 20);
		Form form("6", 40, 40);
		Form form1("7", 10, 10);
		std::cout << bureaucrat << std::endl;
		std::cout << form << std::endl;
		std::cout << form1 << std::endl;
		form.beSigned(bureaucrat);
		std::cout << form << std::endl;
		form1.beSigned(bureaucrat);
		std::cout << form1 << std::endl;
	}
	catch (std::exception &exception) {
		std::cout << exception.what() << std::endl;
	}
	std::cout << "==================================" << std::endl;
	try {
		Bureaucrat bureaucrat("7", 20);
		Form form("7", 40, 40);
		Form form1("8", 10, 10);
		std::cout << bureaucrat << std::endl;
		std::cout << form << std::endl;
		std::cout << form1 << std::endl;
		bureaucrat.signForm(&form);
		std::cout << form << std::endl;
		bureaucrat.signForm(&form1);
		std::cout << form1 << std::endl;
	}
	catch (std::exception &exception) {
		std::cout << exception.what() << std::endl;
	}
	std::cout << "==================================" << std::endl;
}