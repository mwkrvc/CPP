# include "DiamondTrap.hpp"

int main()
{
	DiamondTrap lol("diamond");
	lol.whoAmI();
	lol.attack("4");
	lol.GuardGate();
	lol.takeDamage(20);
	lol.beRepaired(20);
	lol.highFiveGuys();
}