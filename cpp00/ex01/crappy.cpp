#include "phonebook.hpp"

std::string truncate(const std::string& str)
{
	if (str.length() > 10)
		return str.substr(9, 9) + ".";
	return (str);
}

int main(int argc, char **argv)
{
	PhoneBook book;
	std::string input;

	(void)argv;
	if (argc != 1)
	{
		std::cout << KGRN << "Usage: ./phonebook" << KNRM << std::endl;
		return (1);
	}
	while (true)
	{
		std::cout << KYEL << "Input command: " << KNRM;
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			break;
		}
		if (input == "ADD")
		{
			if (!book.add())
				break;
		}
		else if (input == "SEARCH")
			book.search();
		else if (input == "EXIT")
		{
			std::cout << "🔥📖🔥" << std::endl;
			break;
		}
		else
		{
			std::cout << "Not a valid command" << std::endl;
			continue;
		}
	}
}
