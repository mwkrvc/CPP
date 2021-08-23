#ifndef ANIMAL_CLASS_HPP
# define ANIMAL_CLASS_HPP

# include <iostream>

class Animal {
public:
	Animal();
	Animal(const std::string & type);
	virtual ~Animal();
	std::string getType() const;
	virtual void makeSound() const;

protected:
	std::string _type;
	Animal(Animal const & animal);
	Animal & operator=(Animal const & animal);
};

#endif