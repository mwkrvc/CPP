
#include "phonebook.hpp"

bool PhoneBook::add() {

	std::string info;
	std::string prompt[5] = {"First name: ", "Last name: ", "Nickname: ", "Phone number: ", "Darkest Secret: "};
	int i;

	for (i = 0; i < 8; ++i)
	{
		if (this->contact[i].getContact(0).empty())
			break;
	}
	if (i < 8)
	{
		if (i == 0)
			this->contact[i].setStatus(true);
		return this->contact[i].update(prompt);
	}
	else
	{
		std::cout << KRED << "Phone book is full, the oldest contact will now be replaced" << KNRM << std::endl;
		for (i = 0; i < 8; ++i)
		{
			if (this->contact[i].getStatus())
				break;
		}
		if (!this->contact[i].update(prompt))
			return false;
		this->contact[i].setStatus(false);
		if (i == 7)
			this->contact[0].setStatus(true);
		else
			this->contact[i + 1].setStatus(true);
	}
	std::cout << KGRN << "Contact information saved !" << KNRM << std::endl;
	return true;
}

void PhoneBook::search() {

	std::string search;

	for (int j = 0; j < 8; ++j) {
		if (this->contact[j].getEmpty())
			break;
		std::cout << "|" << std::setw(10) << j + 1 << "|";
		for (int k = 0; k < 3; ++k) {
			search = truncate(this->contact[j].getContact(k));
			std::cout << std::setw(10) << search << "|";
		}
		std::cout << std::endl;
	}
}
