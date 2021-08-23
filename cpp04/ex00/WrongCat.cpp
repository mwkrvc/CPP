# include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
	this->_type = "Wrong Cat";
    std::cout << this->_type << " constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrongCat) {
    std::cout << "Wrong cat copy constructor called" << std::endl;
    *this = wrongCat;
}

WrongCat::~WrongCat() {
    std::cout << "Wrong cat destructor called" << std::endl;
}

WrongCat & WrongCat::operator=(const WrongCat &wrongCat) {
    std::cout << "Assignation operator called" << std::endl;
    this->_type = wrongCat.getType();
    return *this;
}

void WrongCat::makeSound() const {
    std::cout << "meow meow" << std::endl;
}
