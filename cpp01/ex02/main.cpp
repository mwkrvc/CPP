# include <iostream>

int main()
{
	std::string brain = "HI THIS IS BRAIN";
	std::string* stringPTR = &brain;
	std::string& stringREF = brain;

	std::cout << "adress in memory of the string: " << &brain << std::endl << std::endl;
	std::cout << "address using a pointer: " << stringPTR << std::endl;
	std::cout << "address using a reference: " << &stringREF << std::endl << std::endl;
	std::cout << "string using a pointer: " << *stringPTR << std::endl;
	std::cout << "string using a reference: " << stringREF << std::endl;

}