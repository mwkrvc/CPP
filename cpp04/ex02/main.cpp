# include "Dog.hpp"
# include "Cat.hpp"

int main()
{
	Dog *dogdog = new Dog;
	Cat const *catcat = new Cat;

	std::cout << "-----dogdog-----" << std::endl;
	dogdog->setIdeas("hochu v odessu");
	std::cout << dogdog->getType() << ": " << dogdog->getIdeas()[0] << std::endl;

	std::cout << "-----catcat-----" << std::endl;
	catcat->setIdeas("ya boleyu za dinamo kiev");
	std::cout << catcat->getType() << ": " << catcat->getIdeas()[0] << std::endl;

	Cat newcat = Cat(*catcat);
	std::cout << "-----newcat-----" << std::endl;
	std::cout << newcat.getType() << ": " << newcat.getIdeas()[0] << std::endl;

	Dog newdog = Dog(*dogdog);
	std::cout << "-----newdog-----" << std::endl;
	std::cout << newdog.getType() << ": " << newdog.getIdeas()[0] << std::endl;

	delete dogdog;
    delete catcat;
}
