#ifndef CAT_CLASS_HPP
# define CAT_CLASS_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {
public:
	Cat();
	Cat(Cat const & cat);
	~Cat();
	Cat & operator=(Cat const & cat);
	void makeSound() const;
	std::string *getIdeas() const;
	void setIdeas(const std::string& idea) const;

private:
    Brain *brain;
};


#endif