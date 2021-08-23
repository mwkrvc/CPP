
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :_gradeSign(145), _gradeExec(137) {
	this->_sign = false;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : _gradeSign(145), _gradeExec(137) {
	this->_sign = false;
	this->_target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {

}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &scf) {
	new(this)ShrubberyCreationForm(scf._target);
	this->_sign = scf._sign;
	return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &scf) : _gradeSign(scf._gradeSign), _gradeExec(scf._gradeExec) {
	this->_sign = scf._sign;
	this->_target = scf._target;
}

void ShrubberyCreationForm::beSigned(const Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > this->_gradeSign)
		throw Form::GradeTooLowException();
	else
	{
		std::cout << "ShrubberyCreationForm" << " signed by " << bureaucrat.getName() << std::endl;
		this->_sign = true;
	}
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
	if (!this->_sign)
	{
		std::cout << "ShrubberyCreationForm is not signed and cannot be executed" << std::endl;
		return;
	}
	else if (this->_gradeExec < executor.getGrade())
		throw Form::GradeTooHighException();
	else
	{
		std::ofstream o(this->_target + "_shrubbery");
		if (!o)
		{
			std::cout << "File error" << std::endl;
			return;
		}
		std::cout << "ShrubberyCreationForm executed" << std::endl;
		o << "\"                                                         .\n"
			 "                                              .         ;  \n"
			 ".              .              ;%     ;;   \n"
			 ",           ,                :;%  %;   \n"
			 ":         ;                   :;%;'     .,   \n"
			 ",.        %;     %;            ;        %;'    ,;\n"
			 ";       ;%;  %%;        ,     %;    ;%;    ,%'\n"
			 "%;       %;%;      ,  ;       %;  ;%;   ,%;' \n"
			 ";%;      %;        ;%;        % ;%;  ,%;'\n"
			 "`%;.     ;%;     %;'         `;%%;.%;'\n"
			 "`:;%.    ;%%. %@;        %; ;@%;%'\n"
			 "`:%;.  :;bd%;          %;@%;'\n"
			 "`@%:.  :;%.         ;@@%;'   \n"
			 "`@%.  `;@%.      ;@@%;         \n"
			 "`@%%. `@%%    ;@@%;        \n"
			 ";@%. :@%%  %@@%;       \n"
			 "%@bd%%%bd%%:;     \n"
			 "                                #@%%%%%:;;\n"
			 "%@@%%%::;\n"
			 "%@@@%(o);  . '         \n"
			 "%@@@o%;:(.,'         \n"
			 "`.. %@@@o%::;         \n"
			 "`)@@@o%::;         \n"
			 "%@@(o)::;        \n"
			 ".%@@@@%::;         \n"
			 ";%@@@@%::;.          \n"
			 ";%@@@@%%:;;;. \n"
			 "...;%@@@@@%%:;;;;,..   \n" << std::endl;
		o.close();
	}
}

bool ShrubberyCreationForm::getSign() const {
	return this->_sign;
}

int ShrubberyCreationForm::getGradeSign() const {
	return this->_gradeSign;
}

int ShrubberyCreationForm::getGradeExec() const {
	return this->_gradeExec;
}
