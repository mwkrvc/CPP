#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::~AMateria() {}

AMateria::AMateria(const AMateria &copy) {
	*this = copy;
}

AMateria &AMateria::operator=(const AMateria &aMateria) {
	this->_type = aMateria._type;
	return *this;
}

AMateria::AMateria(const std::string &type) {
	this->_type = type;
}

std::string const &AMateria::getType() const {
	return this->_type;
}

void AMateria::use(ICharacter &target) {
	(void)target;
}
