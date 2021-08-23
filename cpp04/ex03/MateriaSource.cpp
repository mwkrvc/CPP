# include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _materia() {
	for (int i = 0; i < 4; ++i) {
		this->_materia[i] = NULL;
	}
	this->_items = 0;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; ++i) {
		delete _materia[i];
	}
}

void MateriaSource::learnMateria(AMateria *aMateria) {
	if (this->_items == 4 || !aMateria)
	{
		std::cout << "Can't learn" << std::endl;
		delete aMateria;
		return;
	}
	if (!(this->_materia[this->_items]))
		this->_materia[this->_items] = aMateria;
	this->_items++;
}

AMateria *MateriaSource::createMateria(const std::string &type) {
	for (int i = 0; i < this->_items; ++i) {
		if (this->_materia[i]->getType() == type)
			return this->_materia[i]->clone();
	}
	return 0;
}

MateriaSource::MateriaSource(const MateriaSource &materiaSource) : _materia() {
	for (int i = 0; i < materiaSource._items; ++i) {
		if (materiaSource._materia[i] != NULL)
			this->_materia[i] = materiaSource._materia[i]->clone();
	}
	this->_items = materiaSource._items;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &materiaSource) {
	if (this == &materiaSource)
		return *this;
	for (int i = 0; i < this->_items; ++i) {
		delete this->_materia[i];
		this->_materia[i] = NULL;
	}
	for (int i = 0; i < 4; ++i) {
		if (materiaSource._materia[i] != 0)
			this->_materia[i] = materiaSource._materia[i];
	}
	return *this;
}
