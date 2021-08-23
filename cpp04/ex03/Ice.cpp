# include "Ice.hpp"

AMateria* Ice::clone() const {
    Ice * clone = new Ice(*this);
    return (clone);
}

Ice::Ice() : AMateria("ice") {}

Ice::~Ice() {}

Ice::Ice(const Ice &ice) {
    *this = ice;
}

Ice &Ice::operator=(const Ice &ice) {
	this->_type = ice._type;
    return *this;
}

void Ice::use(ICharacter &target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
