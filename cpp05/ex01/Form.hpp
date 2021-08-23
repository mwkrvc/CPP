#ifndef FORM_CLASS_HPP
# define FORM_CLASS_HPP

# include "Bureaucrat.hpp"
# define KNRM  "\x1B[0m"
# define KRED  "\x1B[31m"

class Bureaucrat;

class Form {
public:
	~Form();
	Form(Form const & form);
	Form & operator=(Form const & form);

	Form(const std::string& name, int gradeSign, int gradeExec);

	std::string getName() const;
	bool getSign() const;
	int getGradeSign() const;
	int getGradeExec() const;

	void setSign(bool s);

	class GradeTooHighException : public std::exception {
	public:
		virtual const char * what() const throw();
	};
	class GradeTooLowException : public std::exception {
	public:
		virtual const char * what() const throw();
	};

	void beSigned(Bureaucrat const & bureaucrat);
private:
	Form();
	std::string const _name;
	bool _sign;
	int const _gradeSign;
	int const _gradeExec;
};

std::ostream & operator<<(std::ostream & o, Form const & form);

#endif