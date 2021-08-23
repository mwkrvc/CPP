#include "Cure.hpp"

AMateria* Cure::clone() const {
    Cure * clone = new Cure(*this);
    return (clone);
}

Cure::Cure() : AMateria("cure") {}

Cure::~Cure() {}

Cure::Cure(const Cure &cure) {
	*this = cure;
}

Cure &Cure::operator=(const Cure &cure) {
	this->_type = cure._type;
    return *this;
}

void Cure::use(ICharacter &target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}


