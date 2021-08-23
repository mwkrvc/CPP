# include "ClapTrap.hpp"

int main()
{
	ClapTrap a("Bob");

	a.attack("Jim");
	a.attack("Jim");
	a.takeDamage(15);
	a.beRepaired(1);
	a.beRepaired(20);
	a.takeDamage(5);
	a.takeDamage(90);
}