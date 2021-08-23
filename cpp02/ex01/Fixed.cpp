# include "Fixed.hpp"

Fixed::Fixed() : _n(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & fixed) {
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::Fixed(const float f) {
	std::cout << "Float constructor called" << std::endl;
	this->_n = roundf(f * (1 << _bits));
}

Fixed::Fixed(const int n) {
	std::cout << "Int constructor called" << std::endl;
	this->_n = n << _bits;
}

Fixed & Fixed::operator=(Fixed const & src) {
	std::cout << "Assignation operator called" << std::endl;
	this->_n = src.getRawBits();
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
	return this->_n;
}

void Fixed::setRawBits(int const raw) {
	this->_n = raw;
}

float Fixed::toFloat() const {
	float ret;
	ret = (float)_n / (float)(1 << _bits);
	return ret;
}

int Fixed::toInt() const {
	return this->_n / (1 << _bits);
}

std::ostream  & operator<<(std::ostream & o, Fixed const & src)
{
	o << src.toFloat();
	return o;
}

