# include "Zombie.hpp"

void Zombie::announce() {
	std::cout << "<" << this->_name << "> " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie() {
	std::cout << "zombies....." << std::endl;
}

Zombie::~Zombie() {
	std::cout << "bye bye " << this->_name << std::endl;
}

void Zombie::setName(std::string name) {
	this->_name = name;
}
