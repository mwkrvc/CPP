#ifndef CLASS_HUMANB_HPP
# define CLASS_HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"


class HumanB {
public:

	HumanB(std::string name);
	~HumanB();
	void attack();
	void setWeapon(Weapon &weapon);

private:
	Weapon *_weapon;
	std::string _name;

};

#endif