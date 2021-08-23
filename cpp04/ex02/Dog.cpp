# include "Dog.hpp"
# include "Brain.hpp"

Dog::Dog() : Animal() {
	this->_type = "Dog";
	std::cout << this->_type << " constructor called" << std::endl;
    this->brain = new Brain();
}

Dog::Dog(const Dog &dog) {
	std::cout << "Dog copy constructor called" << std::endl;
	this->_type = dog.getType();
    this->brain = new Brain(*dog.brain);
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
	delete this->brain;
}

Dog &Dog::operator=(const Dog &dog) {
	std::cout << "Assignation operator called" << std::endl;
	if (this == &dog)
		return *this;
	delete this->brain;
	this->brain = new Brain(*dog.brain);
	return *this;
}

void Dog::makeSound() const {
	std::cout << "woof woof" << std::endl;
}

void Dog::setIdeas(const std::string& idea) const
{
	this->brain->setIdeas(idea);
}

std::string *Dog::getIdeas() const {
	return this->brain->getIdeas();
}