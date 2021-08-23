#include "Intern.hpp"

Intern::Intern() {

}

Intern::~Intern() {

}

Intern::Intern(Intern const & intern) {
	*this = intern;
}

Intern &Intern::operator=(const Intern &intern) {
	(void)intern;
	return *this;
}

Form *Intern::makeForm(const std::string& formName, const std::string& target) {
	int i;
	std::string types[3] = {"shrubbery request", "robotomy request", "presidential request"};
	typedef Form *(Intern::*funcs) (const std::string &target);
	funcs f[3] = {&Intern::Shrubbery, &Intern::Robot, &Intern::President};
	for (i = 0; i < 3; ++i) {
		if (types[i] == formName)
			return (this->*f[i])(target);
	}
	return 0;
}

Form *Intern::Shrubbery(const std::string& target) {
	std::cout << "ShrubberyCreationForm created" << std::endl;
	return new ShrubberyCreationForm(target);
}

Form *Intern::Robot(const std::string &target) {
	std::cout << "RobotomyRequestForm created" << std::endl;
	return new RobotomyRequestForm(target);
}

Form *Intern::President(const std::string &target) {
	std::cout << "PresidentialPardonForm" << std::endl;
	return new PresidentialPardonForm(target);
}

