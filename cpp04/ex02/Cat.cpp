# include "Cat.hpp"

Cat::Cat() : Animal() {
	this->_type = "Cat";
	std::cout << this->_type << " constructor called" << std::endl;
	brain = new Brain();
}

Cat::Cat(const Cat &cat) {
	std::cout << "Cat copy constructor called" << std::endl;
	this->_type = cat.getType();
    this->brain = new Brain(*cat.brain);
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
	delete this->brain;
}

Cat &Cat::operator=(const Cat & cat) {
	std::cout << "Assignation operator called" << std::endl;
	if (this == &cat)
		return *this;
	delete this->brain;
	this->brain = new Brain(*cat.brain);
	return *this;
}

void Cat::makeSound() const {
	std::cout << "meow meow" << std::endl;
}

void Cat::setIdeas(const std::string& idea) const {
	brain->setIdeas(idea);
}

std::string *Cat::getIdeas() const {
	return brain->getIdeas();
}
