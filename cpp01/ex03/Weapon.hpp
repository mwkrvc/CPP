#ifndef WEAPON_CLASS_HPP
# define WEAPON_CLASS_HPP

#include <iostream>

class Weapon {

public:

	Weapon(std::string type);
	Weapon();
	~Weapon();
	void setType(std::string type);
	const std::string& getType();

private:

	std::string _type;
};

#endif