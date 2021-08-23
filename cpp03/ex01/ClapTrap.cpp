# include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "ClapTrap default constructor called but it shouldn't have been !" << std::endl;
	this->_name = "🤡🤡🤡";
	this->_hitPoints = 0;
	this->_energyPoints = 0;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap(const std::string & name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(10) {
	std::cout << this->_name << " ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & clapTrap) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = clapTrap;
}

std::string ClapTrap::getName() const{
	return this->_name;
}

int ClapTrap::getHitPoints() const {
	return this->_hitPoints;
}

int ClapTrap::getEnergyPoints() const {
	return this->_energyPoints;
}

int ClapTrap::getAttackDamage() const {
	return this->_attackDamage;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &clapTrap) {
	std::cout << "ClapTrap assignation operator called" << std::endl;
	this->_name = clapTrap.getName();
	this->_hitPoints = clapTrap.getHitPoints();
	this->_energyPoints = clapTrap.getEnergyPoints();
	this->_attackDamage = clapTrap.getAttackDamage();
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << this->_name << " ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target) {
	if (this->_hitPoints < this->_attackDamage)
		std::cout << this->_name << " is out of hit points and cannot attack " << target << std::endl;
	else
	{
		std::cout << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage" << std::endl;
		this->_hitPoints -= this->_attackDamage;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->_energyPoints <= 0)
		std::cout << this->_name << " is already dead lol" << std::endl;
	else
	{
		std::cout << this->_name << " takes " << amount << " points of damage" << std::endl;
		this->_energyPoints -= amount;
		if (this->_energyPoints <= 0)
			std::cout << this->_name << " has taken critical damage and is now dead" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	int temp = this->_energyPoints;
	std::cout << this->_name << " restores " << amount << " energy points" << std::endl;
	this->_energyPoints += amount;
	if (this->_energyPoints <= 0)
		std::cout << amount << " energy points was not enough to revive " << this->_name << std::endl;
	else if (temp <= 0 && this->_energyPoints > 0)
		std::cout << amount << " energy points brought " << this->_name << " back to life !" << std::endl;
}
