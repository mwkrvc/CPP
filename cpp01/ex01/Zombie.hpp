#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

# include <iostream>

class Zombie {

private:

	std::string _name;

public:

	Zombie();
	~Zombie();

	void setName(std::string name);
	void announce();
};

#endif