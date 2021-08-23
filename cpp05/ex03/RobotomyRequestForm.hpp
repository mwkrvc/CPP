
#ifndef ROBOTOMYREQUESTFORM_CLASS_HPP
# define ROBOTOMYREQUESTFORM_CLASS_HPP

# include <iostream>
# include "Form.hpp"

class RobotomyRequestForm : public Form {
public:
	RobotomyRequestForm(const std::string& target);
	~RobotomyRequestForm();
	RobotomyRequestForm & operator=(RobotomyRequestForm const & rrf);
	RobotomyRequestForm(RobotomyRequestForm const & rrf);

	void execute(Bureaucrat const & executor) const;
	void beSigned(Bureaucrat const & bureaucrat);

	bool getSign() const;
	int getGradeSign() const;
	int getGradeExec() const;


private:
	RobotomyRequestForm();
	bool _sign;
	int const _gradeSign;
	int const _gradeExec;
	std::string _target;
};

#endif
