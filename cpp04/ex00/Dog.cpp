# include "Dog.hpp"
#include "../ex01/Dog.hpp"


Dog::Dog() : Animal() {
	this->_type = "Dog";
	std::cout << this->_type << " constructor called" << std::endl;
}

Dog::Dog(const Dog &dog) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = dog;
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &dog) {
	std::cout << "Assignation operator called" << std::endl;
	this->_type = dog.getType();
	return *this;
}

void Dog::makeSound() const {
	std::cout << "woof woof" << std::endl;
}

