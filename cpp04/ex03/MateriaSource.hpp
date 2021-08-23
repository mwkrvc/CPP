#ifndef MATERIASOURCE_CLASS_HPP
#define MATERIASOURCE_CLASS_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource {
public:
    MateriaSource();
    ~MateriaSource();
    MateriaSource(const MateriaSource & materiaSource);
    MateriaSource & operator=(const MateriaSource & materiaSource);
    void learnMateria(AMateria* aMateria);
    AMateria* createMateria(std::string const & type);

private:
	AMateria*	_materia[4];
	int			_items;
};

#endif
