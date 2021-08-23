#ifndef DIAMONDTRAP_CLASS_HPP
# define DIAMONDTRAP_CLASS_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
public:
	DiamondTrap();
	DiamondTrap(const std::string &name);
	DiamondTrap(DiamondTrap const & diamondTrap);
	void attack(std::string const & target);
	~DiamondTrap();
	DiamondTrap & operator=(DiamondTrap const & diamondTrap);
	void whoAmI();

private:
	std::string _name;
};

#endif
