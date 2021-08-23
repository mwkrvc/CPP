#ifndef SCAVTRAP_CLASS_HPP
# define SCAVTRAP_CLASS_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
public:
	ScavTrap();
	~ScavTrap();
	ScavTrap(ScavTrap const & scavTrap);
	ScavTrap(const std::string & name);
	ScavTrap & operator=(ScavTrap const & scavTrap);
	void GuardGate();

};

#endif
