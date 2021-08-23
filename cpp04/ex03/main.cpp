# include "AMateria.hpp"
# include "MateriaSource.hpp"
# include "Ice.hpp"
# include "Cure.hpp"
# include "Character.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    ICharacter* me = new Character("me");
    Character *jim = new Character("jim");
    AMateria *tmp;

    src->learnMateria(new Cure());
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    tmp = src->createMateria("ice");
    jim->equip(tmp);
    jim->equip(tmp);
    tmp = src->createMateria("cure");
    jim->equip(tmp);

    Character *dave = new Character(*jim);
    std::cout << jim->getName() << std::endl;
    std::cout << dave->getName() << std::endl;
    dave->unequip(5);
    dave->use(2, *jim);
    ICharacter* bob = new Character("bob");
    jim->use(0, *bob);
    dave->use(0, *bob);
    jim->use(1, *bob);
    dave->use(1, *bob);

    tmp = src->createMateria("cure");
    me->equip(tmp);
    me->use(0, *bob);
    me->unequip(0);
    me->use(0, *bob);

    delete tmp;
    delete bob;
    delete jim;
    delete dave;
    delete me;
    delete src;
    return 0;
}

//
//int main()
//{
//	IMateriaSource* src = new MateriaSource();
//	src->learnMateria(new Ice());
//	src->learnMateria(new Cure());
//	ICharacter* me = new Character("me");
//	AMateria* tmp;
//	tmp = src->createMateria("ice");
//	me->equip(tmp);
//	tmp = src->createMateria("cure");
//	me->equip(tmp);
//	ICharacter* bob = new Character("bob");
//	me->use(0, *bob);
//	me->use(1, *bob);
//	delete bob;
//	delete me;
//	delete src;
//	return 0;
//}
