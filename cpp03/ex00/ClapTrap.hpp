#ifndef CLAPTRAP_CLASS_HPP
# define CLAPTRAP_CLASS_HPP

# include <iostream>

class ClapTrap {

public:

	ClapTrap();
	ClapTrap(ClapTrap const & clapTrap);
	ClapTrap(const std::string& name);
	~ClapTrap();
	ClapTrap & operator=(ClapTrap const & clapTrap);

	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	std::string getName() const;
	int getHitPoints() const;
	int getEnergyPoints() const;
	int getAttackDamage() const;

private:

	std::string _name;
	int _hitPoints;
	int _energyPoints;
	int  _attackDamage;
};

#endif