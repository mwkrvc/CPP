#ifndef FORM_CLASS_HPP
# define FORM_CLASS_HPP

# include <fstream>
# include "Bureaucrat.hpp"
# define KNRM  "\x1B[0m"
# define KRED  "\x1B[31m"

class Bureaucrat;

class Form {
public:
	Form();
	virtual ~Form();
	Form(Form const & form);
	Form & operator=(Form const & form);

	std::string getName() const;
	virtual bool getSign() const;
	virtual int getGradeSign() const;
	virtual int getGradeExec() const;

	void setSign(bool s);

	class GradeTooHighException : public std::exception {
	public:
		virtual const char * what() const throw();
	};
	class GradeTooLowException : public std::exception {
	public:
		virtual const char * what() const throw();
	};

	virtual void execute(Bureaucrat const & executor) const = 0;
	virtual void beSigned(Bureaucrat const & bureaucrat) = 0;
private:
	std::string const _name;
	bool _sign;
	int const _gradeSign;
	int const _gradeExec;
};

std::ostream & operator<<(std::ostream & o, Form const & form);

#endif