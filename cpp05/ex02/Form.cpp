#include "Form.hpp"

Form::Form() : _name("default"), _gradeSign(1), _gradeExec(1) {
	this->_sign = false;
}

Form::~Form() {

}

Form::Form(const Form &form) : _name(form._name), _gradeSign(form._gradeSign), _gradeExec(form._gradeExec) {
	this->_sign = false;
}

Form &Form::operator=(const Form &form) {
	this->_sign = form._sign;
	return *this;
}

std::string Form::getName() const {
	return this->_name;
}

bool Form::getSign() const {
	return this->_sign;
}

int Form::getGradeSign() const {
	return this->_gradeSign;
}

int Form::getGradeExec() const {
	return this->_gradeExec;
}

void Form::beSigned(const Bureaucrat &bureaucrat) {
	(void)bureaucrat;
}

void Form::setSign(bool s) {
	this->_sign = s;
}

const char *Form::GradeTooHighException::what() const throw() {
	return "Form grade too high";
}

const char *Form::GradeTooLowException::what() const throw() {
	return "Form grade too low";
}

std::ostream  & operator<<(std::ostream & o, Form const & form)
{
	o << "<" << form.getName() << ">: " << "Grade to sign: "
		<< form.getGradeSign() << " Grade to execute: " << form.getGradeExec() << " | ";
	if (form.getSign())
		std::cout << KRED << "is signed" << KNRM;
	else
		std::cout << KRED << "is not signed" << KNRM;
	return o;
}