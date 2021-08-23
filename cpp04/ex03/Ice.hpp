#ifndef ICE_CLASS_HPP
# define ICE_CLASS_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria {
public:
    Ice();
    ~Ice();
    Ice(Ice const & ice);
    Ice & operator=(const Ice & ice);
    AMateria* clone() const;
    void use(ICharacter & target);
};

#endif