#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {
public:
	Dog();
	Dog(Dog const & dog);
	~Dog();
	Dog & operator=(Dog const & dog);
	void makeSound() const;
	void setIdeas(const std::string& idea);
	std::string *getIdeas();

private:
    Brain *brain;
};

#endif