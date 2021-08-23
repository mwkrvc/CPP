#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP

# include "Animal.hpp"

class Dog : public Animal {
public:
	Dog();
	Dog(Dog const & dog);
	~Dog();
	Dog & operator=(Dog const & dog);
	void makeSound() const;
};

#endif