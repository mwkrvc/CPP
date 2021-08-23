# include "Fixed.hpp"

Fixed::Fixed() : _n(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const & fixed) {
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed & Fixed::operator=(Fixed const & src) {
    std::cout << "Assignation operator called" << std::endl;
    this->_n = src.getRawBits();
    return *this;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->_n;
}

void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    this->_n = raw;
}
