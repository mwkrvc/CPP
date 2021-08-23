# include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm() :_gradeSign(25), _gradeExec(5) {
	this->_sign = false;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : _gradeSign(25), _gradeExec(5) {
	this->_sign = false;
	this->_target = target;
}

PresidentialPardonForm::~PresidentialPardonForm() {

}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &ppf) {
	new(this)PresidentialPardonForm(ppf._target);
	this->_sign = ppf._sign;
	return *this;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &ppf) : _gradeSign(ppf._gradeSign), _gradeExec(ppf._gradeExec) {
	this->_sign = ppf._sign;
	this->_target = ppf._target;
}

void PresidentialPardonForm::beSigned(const Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > this->_gradeSign)
		throw Form::GradeTooLowException();
	else
	{
		std::cout << "PresidentialPardonForm" << " signed by " << bureaucrat.getName() << std::endl;
		this->_sign = true;
	}
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
	if (!this->_sign)
	{
		std::cout << "PresidentialPardonForm is not signed and cannot be executed" << std::endl;
		return;
	}
	else if (this->_gradeExec < executor.getGrade())
		throw Form::GradeTooHighException();
	else
	{
		std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
	}
}

bool PresidentialPardonForm::getSign() const {
	return this->_sign;
}

int PresidentialPardonForm::getGradeSign() const {
	return this->_gradeSign;
}

int PresidentialPardonForm::getGradeExec() const {
	return this->_gradeExec;
}