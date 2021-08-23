# include "ScavTrap.hpp"
# include "FragTrap.hpp"

int main()
{
	ClapTrap a("Jim");
	ScavTrap b("Bob");
	FragTrap c("Jeff");
	a.attack("Rick");
	a.takeDamage(10);
	a.beRepaired(10);
	b.GuardGate();
	b.attack("Rick");
	b.takeDamage(10);
	b.beRepaired(10);
	c.highFiveGuys();
	c.attack("Rick");
	c.takeDamage(10);
	c.beRepaired(10);
}