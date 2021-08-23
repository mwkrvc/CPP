# include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main()
{
	Zombie *zombies1 = zombieHorde(5, "Svyatoy");
    Zombie *zombies2 = zombieHorde(5, "Istochnik");
	for (int i = 0; i < 5; ++i) {
		zombies1[i].announce();
	}
	for (int i = 0; i < 5; ++i) {
	    zombies2[i].announce();
	}
	delete []zombies1;
	delete []zombies2;
}
