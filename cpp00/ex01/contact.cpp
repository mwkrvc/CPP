#include "contact.hpp"

Contact::Contact() : _contact(), _oldest(false), _empty(true) {

}

void Contact::setContact(int i, const std::string& input) {
	this->_contact[i] = input;
}

std::string Contact::getContact(int id) {
	return this->_contact[id];
}

void Contact::setStatus(bool newOld) {
	this->_oldest = newOld;
}

bool Contact::getStatus() const {
	return this->_oldest;
}

void Contact::setEmpty(bool setEmpty) {
	this->_empty = setEmpty;
}

bool Contact::getEmpty() const {
	return this->_empty;
}

bool Contact::update(std::string prompt[5]) {

	std::string info;

	for (int i = 0; i < 5; ++i) {
		std::cout << prompt[i];
		std::getline(std::cin, info);
		if (std::cin.eof())
		{
			std::cout << "🤡🤡🤡" << std::endl;
			return false;
		}
		this->setContact(i, info);
	}
	this->setEmpty(false);
	return true;
}
