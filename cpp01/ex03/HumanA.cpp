# include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon), _name(name) {
	std::cout << this->_name << " constructor called" << std::endl;
}

HumanA::~HumanA() {
	std::cout << this->_name <<  " destructor called" << std::endl;
}

void HumanA::attack() {
	std::cout << this->_name << " attacks with " << this->_weapon.getType() << std::endl;
}
