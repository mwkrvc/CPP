#ifndef WRONGANIMAL_CLASS_HPP
# define WRONGANIMAL_CLASS_HPP

# include <iostream>

class WrongAnimal {
public:
	WrongAnimal();
	WrongAnimal(const std::string & type);
	virtual ~WrongAnimal();
	std::string getType() const;
	void makeSound() const;

protected:
	std::string _type;
	WrongAnimal(WrongAnimal const & wrongAnimal);
	WrongAnimal & operator=(WrongAnimal const & wrongAnimal);
};

#endif
