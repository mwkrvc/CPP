# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	std::cout << "DiamondTrap default constructor called but it shouldn't have been !" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + + "_clap_trap"), ScavTrap(name), FragTrap(name) {
	std::cout << name << " DiamondTrap constructor called" << std::endl;
	ScavTrap temp("temp");
	this->_name = name;
	this->_hitPoints = FragTrap::getHitPoints();
	this->_energyPoints = temp.getEnergyPoints();
	this->_attackDamage = FragTrap::getAttackDamage();

}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondTrap) {
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = diamondTrap;
}

DiamondTrap::~DiamondTrap() {
	std::cout << this->_name << " DiamondTrap destructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &diamondTrap) {
	std::cout << "DiamondTrap assignation operator called" << std::endl;
	this->_name = diamondTrap.getName();
	this->_hitPoints = diamondTrap.getHitPoints();
	this->_energyPoints = diamondTrap.getEnergyPoints();
	this->_attackDamage = diamondTrap.getAttackDamage();
	return *this;
}

void DiamondTrap::attack(std::string const & target){
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout << "ClapTrap::name: " << this->ClapTrap::_name << " name: " << this->_name << std::endl;
}
