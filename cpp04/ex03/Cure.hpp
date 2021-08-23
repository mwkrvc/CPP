#ifndef CURE_CLASS_HPP
# define CURE_CLASS_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria {
public:
    Cure();
    ~Cure();
    Cure(Cure const & cure);
    Cure & operator=(const Cure & cure);
    AMateria* clone() const;
    void use(ICharacter & target);
};

#endif