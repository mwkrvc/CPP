#include "Character.hpp"

Character::Character() : _bag() {
    for (int i = 0; i < 4; ++i) {
		_bag[i] = NULL;
    }
	_items = 0;
}

Character::Character(const std::string &character) {
    this->_name = character;
	for (int i = 0; i < 4; ++i) {
		_bag[i] = NULL;
	}
	_items = 0;
}

std::string const &Character::getName() const {
    return this->_name;
}

Character::~Character() {
    for (int i = 0; i < 4; ++i) {
        delete _bag[i];
    }
}

Character::Character(const Character &character) {
    this->_name = character._name;
	for (int i = 0; i < 4; ++i) {
		if (character._bag[i] != 0)
			this->_bag[i] = character._bag[i]->clone();
	}
	this->_items = character._items;
}

void Character::equip(AMateria *m) {
    if (_items == 4 || !m)
    {
    	std::cout << "Can't equip" << std::endl;
    	return;
    }
    for (int i = 0; i < _items; ++i) {
        if (_bag[i] == m)
        {
        	std::cout << "Already equipped" << std::endl;
        	return;
        }
    }
	_bag[_items++] = m;
}

void Character::unequip(int idx) {
	int i;
	if (idx < 0 || idx > 3)
	{
		std::cout << "Can't unequip" << std::endl;
		return;
	}
	if (_bag[idx] && (idx >= 0 && idx <= 4))
	{
		for (i = idx; i < _items; ++i)
			_bag[i] = _bag[i + 1];
	}
	this->_items--;
}

void Character::use(int idx, ICharacter &target) {
	if (idx > this->_items - 1)
	{
		std::cout << "Can't use" << std::endl;
		return;
	}
	std::cout << this->_name << ": ";
    _bag[idx]->use(target);
}

Character &Character::operator=(const Character &character) {
	if (this == &character)
		return *this;
	for (int i = 0; i < this->_items; ++i) {
		delete this->_bag[i];
		this->_bag[i] = NULL;
	}
	for (int i = 0; i < 4; ++i) {
		if (character._bag[i] != 0)
			this->_bag[i] = character._bag[i];
	}
	this->_name = character._name;
	this->_items = character._items;
	return *this;
}
