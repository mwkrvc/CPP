#ifndef PRESIDENTIALPARDONFORM_CLASS_HPP
#define PRESIDENTIALPARDONFORM_CLASS_HPP

# include <iostream>
# include "Form.hpp"

class PresidentialPardonForm : public Form {
public:
	PresidentialPardonForm(const std::string& target);
	~PresidentialPardonForm();
	PresidentialPardonForm & operator=(PresidentialPardonForm const & ppf);
	PresidentialPardonForm(PresidentialPardonForm const & ppf);

	void execute(Bureaucrat const & executor) const;
	void beSigned(Bureaucrat const & bureaucrat);

	bool getSign() const;
	int getGradeSign() const;
	int getGradeExec() const;


private:
	PresidentialPardonForm();
	bool _sign;
	int const _gradeSign;
	int const _gradeExec;
	std::string _target;
};

#endif