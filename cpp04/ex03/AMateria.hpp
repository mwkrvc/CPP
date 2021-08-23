#ifndef CPP04_AMATERIA_HPP
#define CPP04_AMATERIA_HPP

# include <iostream>

class ICharacter;

class AMateria {
public:
	AMateria();
	virtual ~AMateria();
	AMateria(const AMateria & copy);
	AMateria & operator=(const AMateria & aMateria);

	AMateria(std::string const & type);
	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
protected:
	std::string _type;
};


#endif
