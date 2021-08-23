# include "Bureaucrat.hpp"

int main()
{
	try {
		Bureaucrat bureaucrat("1", 0);
	}
	catch (std::exception &exception) {
		std::cout << exception.what() << std::endl;
	}
	try {
		Bureaucrat bureaucrat("2", 170);
	}
	catch (std::exception &exception) {
		std::cout << exception.what() << std::endl;
	}
	try {
		Bureaucrat bureaucrat("3", 1);
		bureaucrat.gradeInc();
	}
	catch (std::exception &exception) {
		std::cout << exception.what() << std::endl;
	}
	try {
		Bureaucrat bureaucrat("4", 150);
		bureaucrat.gradeDec();
	}
	catch (std::exception &exception) {
		std::cout << exception.what() << std::endl;
	}
	try {
		Bureaucrat bureaucrat("5", 30);
		std::cout << bureaucrat << std::endl;
		bureaucrat.gradeDec();
		std::cout << bureaucrat << std::endl;
		bureaucrat.gradeInc();
		bureaucrat.gradeInc();
		std::cout << bureaucrat << std::endl;
		for (int i = 0; i < 40; ++i) {
			bureaucrat.gradeInc();
		}
	}
	catch (std::exception &exception) {
		std::cout << exception.what() << std::endl;
	}
}