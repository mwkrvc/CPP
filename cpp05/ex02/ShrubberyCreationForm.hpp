#ifndef SHRUBBERYCREATIONFORM_CLASS_HPP
# define SHRUBBERYCREATIONFORM_CLASS_HPP

# include <iostream>
# include "Form.hpp"


class ShrubberyCreationForm : public Form {
public:
	ShrubberyCreationForm(const std::string& target);
	~ShrubberyCreationForm();
	ShrubberyCreationForm & operator=(ShrubberyCreationForm const & scf);
	ShrubberyCreationForm(ShrubberyCreationForm const & scf);

	void execute(Bureaucrat const & executor) const;
	void beSigned(Bureaucrat const & bureaucrat);

	bool getSign() const;
	int getGradeSign() const;
	int getGradeExec() const;


private:
	ShrubberyCreationForm();
	bool _sign;
	int const _gradeSign;
	int const _gradeExec;
	std::string _target;
};


# endif