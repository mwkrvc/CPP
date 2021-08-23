#include "Zombie.hpp"

void Zombie::announce() {
    std::cout << "<" << this->_name << "> " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name) : _name(name) {
    this->announce();
}

Zombie::~Zombie() {
    std::cout << "bye bye " << this->_name << std::endl;
}
