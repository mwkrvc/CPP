# include "Cat.hpp"

Cat::Cat() : Animal() {
	this->_type = "Cat";
	std::cout << this->_type << " constructor called" << std::endl;
}

Cat::Cat(const Cat &cat) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = cat;
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat & cat) {
	std::cout << "Assignation operator called" << std::endl;
	this->_type = cat.getType();
	return *this;
}

void Cat::makeSound() const {
	std::cout << "meow meow" << std::endl;
}
