#ifndef BUREAUCRAT_CLASS_HPP
# define BUREAUCRAT_CLASS_HPP

# include <iostream>

class Bureaucrat {
public:
	Bureaucrat();
	~Bureaucrat();
	Bureaucrat(Bureaucrat const & bureaucrat);
	Bureaucrat & operator=(Bureaucrat const & bureaucrat);

	Bureaucrat(const std::string& name, int grade);

	std::string getName() const;
	int getGrade() const;
	void gradeInc();
	void gradeDec();

	class GradeTooHighException : public std::exception {
	public:
		virtual const char * what() const throw();
	};
	class GradeTooLowException : public std::exception {
	public:
		virtual const char * what() const throw();
	};

private:
	std::string const	_name;
	int					_grade;
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & bureaucrat);

#endif