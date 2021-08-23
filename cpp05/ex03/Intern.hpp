#ifndef INTERN_CLASS_HPP
#define INTERN_CLASS_HPP

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern {
public:
	Intern();
	~Intern();
	Intern(Intern const & intern);
	Intern & operator=(Intern const & intern);

	Form *Shrubbery(const std::string& target);
	Form *Robot(const std::string& target);
	Form *President(const std::string& target);
	Form* makeForm(const std::string& formName, const std::string& target);
};

#endif
