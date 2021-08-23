# include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() :_gradeSign(72), _gradeExec(45) {
	this->_sign = false;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : _gradeSign(72), _gradeExec(45) {
	this->_sign = false;
	this->_target = target;
}

RobotomyRequestForm::~RobotomyRequestForm() {

}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rrf) {
	new(this)RobotomyRequestForm(rrf._target);
	this->_sign = rrf._sign;
	return *this;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rrf) : _gradeSign(rrf._gradeSign), _gradeExec(rrf._gradeExec) {
	this->_sign = rrf._sign;
	this->_target = rrf._target;
}

void RobotomyRequestForm::beSigned(const Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > this->_gradeSign)
		throw Form::GradeTooLowException();
	else
	{
		std::cout << "ShrubberyCreationForm" << " signed by " << bureaucrat.getName() << std::endl;
		this->_sign = true;
	}
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	if (!this->_sign)
	{
		std::cout << "RobotomyRequestForm is not signed and cannot be executed" << std::endl;
		return;
	}
	else if (this->_gradeExec < executor.getGrade())
		throw Form::GradeTooHighException();
	else
	{
		std::cout << "* drilling noises *" << std::endl;
		int r = rand() % 11;
		int num = r % 2;
		switch (num) {
			case 0:
				std::cout << this->_target << " has been robotomized successfully" << std::endl;
				break;
			case 1:
				std::cout << this->_target << " has not been robotomized" << std::endl;
				break;
			default:
				std::cout << this->_target << " has not been robotomized" << std::endl;
		}
	}
}

bool RobotomyRequestForm::getSign() const {
	return this->_sign;
}

int RobotomyRequestForm::getGradeSign() const {
	return this->_gradeSign;
}

int RobotomyRequestForm::getGradeExec() const {
	return this->_gradeExec;
}
