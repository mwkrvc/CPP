#ifndef HUMANA_CLASS_HPP
# define HUMANA_CLASS_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA {

public:

	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	void attack();

private:
	Weapon &_weapon;
	std::string _name;
};

#endif