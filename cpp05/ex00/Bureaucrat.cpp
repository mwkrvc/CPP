# include "Bureaucrat.hpp"
# include "../ex01/Bureaucrat.hpp"
# include "../ex02/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {

}

Bureaucrat::~Bureaucrat() {

}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat) {
	*this = bureaucrat;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat) {
	new(this)Bureaucrat(bureaucrat._name, bureaucrat._grade);
	return *this;
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
	{
		std::cout << "Constructed successfully" << std::endl;
		this->_grade = grade;
	}
}

std::string Bureaucrat::getName() const {
	return this->_name;
}

int Bureaucrat::getGrade() const {
	return this->_grade;
}

void Bureaucrat::gradeInc() {
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
	{
		std::cout << "Grade successfully incremented" << std::endl;
		this->_grade--;
	}
}

void Bureaucrat::gradeDec() {
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
	{
		std::cout << "Grade successfully decremented" << std::endl;
		this->_grade++;
	}
}

std::ostream  & operator<<(std::ostream & o, Bureaucrat const & bureaucrat)
{
	o << "<" << bureaucrat.getName() << ">, bureaucrat grade <" << bureaucrat.getGrade() << ">";
	return o;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade too low";
}
