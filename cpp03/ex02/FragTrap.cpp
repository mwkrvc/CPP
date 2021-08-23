
#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "FragTrap default constructor called but it shouldn't have been !" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
	std::cout << this->_name << " FragTrap constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::~FragTrap() {
	std::cout << this->_name << " FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragTrap)  : ClapTrap(fragTrap) {
	std::cout << "Fragtrap copy constructor called" << std::endl;
	*this = fragTrap;
}

FragTrap &FragTrap::operator=(const FragTrap &fragTrap) {
	std::cout << "FragTrap assignation operator called" << std::endl;
	this->_name = fragTrap.getName();
	this->_hitPoints = fragTrap.getHitPoints();
	this->_energyPoints = fragTrap.getEnergyPoints();
	this->_attackDamage = fragTrap.getAttackDamage();
	return *this;
}

void FragTrap::highFiveGuys() {
	std::cout << this->_name << ": High five !" << std::endl;
}
