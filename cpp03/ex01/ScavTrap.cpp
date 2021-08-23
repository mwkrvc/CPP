# include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap default constructor called but it shouldn't have been !" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << this->_name << " ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
	std::cout << this->_name << " ScavTrap constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap) : ClapTrap(scavTrap) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = scavTrap;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scavTrap) {
	std::cout << "ScavTrap assignation operator called" << std::endl;
		this->_name = scavTrap.getName();
		this->_hitPoints = scavTrap.getHitPoints();
		this->_energyPoints = scavTrap.getEnergyPoints();
		this->_attackDamage = scavTrap.getAttackDamage();
		return *this;
}

void ScavTrap::GuardGate() {
	std::cout << this->_name << " ScavTrap has entered in Gate keep mode" << std::endl;
}
