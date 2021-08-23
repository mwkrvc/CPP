# include "Animal.hpp"


Animal::Animal() : _type("Animal"){
	std::cout << this->_type << " constructor called" << std::endl;
}

Animal::Animal(const Animal &animal) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = animal;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const{
	return this->_type;
}

Animal &Animal::operator=(const Animal &animal) {
	std::cout << "Animal assignation operator called" << std::endl;
	this->_type = animal.getType();
	return *this;
}

Animal::Animal(const std::string &type) {
	std::cout << "Animal copy constructor called" << std::endl;
	this->_type = type;
}

void Animal::makeSound() const{

}
