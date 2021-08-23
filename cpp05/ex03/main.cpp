# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Intern.hpp"

int main()
{
	Intern someRandomIntern;
	Form* rrf;
	Form* srf;
	Form* ppf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	srf = someRandomIntern.makeForm("shrubbery request", "Bender");
	ppf = someRandomIntern.makeForm("presidential request", "Bender");
	std::cout << *rrf << std::endl;
	std::cout << *srf << std::endl;
	std::cout << *ppf << std::endl;
	std::cout << "==================================" << std::endl;
	try {
		Bureaucrat bureaucrat("9", 1);
		std::cout << bureaucrat << std::endl;
		std::cout << *ppf << std::endl;
		ppf->beSigned(bureaucrat);
		std::cout << *ppf << std::endl;
		ppf->execute(bureaucrat);
	}
	catch (std::exception & exception) {
		std::cout << exception.what() << std::endl;
	}
	delete rrf;
	delete srf;
	delete ppf;
}