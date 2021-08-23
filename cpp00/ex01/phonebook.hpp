#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include <string>
# include <iostream>
# include <iomanip>
# include "contact.hpp"

# define KNRM  "\x1B[0m"
# define KRED  "\x1B[31m"
# define KGRN  "\x1B[32m"
# define KYEL  "\x1B[33m"

class PhoneBook {

public:

	bool	add();
	void	search();

private:

	Contact	contact[8];
};

std::string truncate(const std::string& str);

#endif
