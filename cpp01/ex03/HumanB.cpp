
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {
	std::cout << _name <<  " constructor called" << std::endl;
}

HumanB::~HumanB() {
	std::cout << _name << " destructor called" << std::endl;
}

void HumanB::attack() {
	std::cout << this->_name << " attacks with " << this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
}