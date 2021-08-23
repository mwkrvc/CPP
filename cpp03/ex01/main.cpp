# include "ScavTrap.hpp"

int main()
{
	ClapTrap a("Jim");
	ScavTrap b("Bob");
	a.attack("Jeff");
	a.takeDamage(10);
	a.beRepaired(10);
	b.GuardGate();
	b.attack("Jeff");
	b.takeDamage(10);
	b.beRepaired(10);
}