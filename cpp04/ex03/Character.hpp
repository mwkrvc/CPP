#ifndef CHARACTER_CLASS_HPP
# define CHARACTER_CLASS_HPP

# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter {
public:
    Character();
    ~Character();
    Character(const Character & character);
    Character & operator=(const Character & character);

    Character(std::string const & character);
    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
private:
    std::string	_name;
    AMateria*	_bag[4];
    int			_items;
};

#endif