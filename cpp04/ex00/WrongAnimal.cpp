
# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Wrong animal"){
	std::cout << this->_type << " constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal & wrongAnimal) {
	std::cout << "Wrong animal copy constructor called" << std::endl;
	*this = wrongAnimal;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Wrong animal destructor called" << std::endl;
}

std::string WrongAnimal::getType() const {
	return this->_type;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &wrongAnimal) {
	this->_type = wrongAnimal.getType();
	return *this;
}

WrongAnimal::WrongAnimal(const std::string & type) {
	this->_type = type;
}

void WrongAnimal::makeSound() const {
	std::cout << "bzzzzzzz" << std::endl;
}