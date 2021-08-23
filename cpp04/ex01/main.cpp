# include "Dog.hpp"
# include "Cat.hpp"

int main()
{
    std::cout << "--------------------------------" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j; //should not create a leak
    delete i;
	std::cout << "--------------------------------" << std::endl;
	Animal *animals[100];
	for (int i = 0; i < 100; ++i) {
	    if (i % 2)
	        animals[i] = new Dog();
	    else
	        animals[i] = new Cat();
	}
	for (int i = 0; i < 100; ++i) {
	    delete animals[i];
	}
	std::cout << "--------------------------------" << std::endl;
	Cat *cat = new Cat();
	Cat *cat1 = new Cat();

	cat->setIdeas("i am a cat");
	cat1->setIdeas("i am also a cat");
	std::cout << cat->getType() << ": " << cat->getIdeas()[0] << std::endl;
	std::cout << cat1->getType() << "1: " << cat1->getIdeas()[0] << std::endl;
	*cat = *cat1;
	std::cout << cat->getType() << ": " << cat->getIdeas()[0] << std::endl;
	std::cout << cat1->getType() << "1: " << cat1->getIdeas()[0] << std::endl;

	delete cat;
	delete cat1;
	std::cout << "--------------------------------" << std::endl;
	Dog *dog = new Dog;
	Dog *dog1 = new Dog;

	dog->setIdeas("i am a dog");
	dog1->setIdeas("i am also a dog");
	std::cout << dog->getType() << ": " << dog->getIdeas()[0] << std::endl;
	std::cout << dog1->getType() << "1: " << dog1->getIdeas()[0] << std::endl;
	*dog1 = *dog;
	std::cout << dog->getType() << ": " << dog->getIdeas()[0] << std::endl;
	std::cout << dog1->getType() << "1: " << dog1->getIdeas()[0] << std::endl;

	delete dog;
	delete dog1;
	std::cout << "--------------------------------" << std::endl;
	Cat *catcat = new Cat;

	catcat->setIdeas("hi hi");
	std::cout << catcat->getType() << ": " << catcat->getIdeas()[0] << std::endl;
	Cat newcat = Cat(*catcat);
	std::cout << newcat.getType() << ": " << newcat.getIdeas()[0] << std::endl;

	delete catcat;
}
