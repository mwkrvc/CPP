#ifndef FRAGTRAP_CLASS_HPP
# define FRAGTRAP_CLASS_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

public:
	FragTrap();
	FragTrap(const std::string & name);
	FragTrap(FragTrap const & scavTrap);
	~FragTrap();
	FragTrap & operator=(FragTrap const & fragTrap);
	void highFiveGuys();
};

#endif