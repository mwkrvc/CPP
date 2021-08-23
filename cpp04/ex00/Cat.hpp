#ifndef CAT_CLASS_HPP
# define CAT_CLASS_HPP

# include "Animal.hpp"

class Cat : public Animal {
public:
	Cat();
	Cat(Cat const & cat);
	~Cat();
	Cat & operator=(Cat const & cat);
	void makeSound() const;
};

#endif