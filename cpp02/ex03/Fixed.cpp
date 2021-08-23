# include "Fixed.hpp"

Fixed::Fixed() : _n(0) {}

Fixed::Fixed(Fixed const & fixed) {
	*this = fixed;}

Fixed::Fixed(const float f) {
	this->_n = roundf(f * (1 << _bits));
}

Fixed::Fixed(const int n) {
	this->_n = n << _bits;
}

Fixed & Fixed::operator=(Fixed const & src)  {
	this->_n = src.getRawBits();
	return *this;
}

Fixed::~Fixed() {}

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
	return _n / (1 << _bits);
}

std::ostream  & operator<<(std::ostream & o, Fixed const & src)
{
	o << src.toFloat();
	return o;
}

bool Fixed::operator<(const Fixed &fixed) const {
	return this->_n < fixed.getRawBits();
}

bool Fixed::operator>(const Fixed &fixed) const {
	return this->_n > fixed.getRawBits();
}

bool Fixed::operator>=(const Fixed &fixed) const {
	return this->_n >= fixed.getRawBits();
}

bool Fixed::operator<=(const Fixed &fixed) const {
	return this->_n <= fixed.getRawBits();
}

bool Fixed::operator==(const Fixed &fixed) const {
	return this->_n == fixed.getRawBits();
}

bool Fixed::operator!=(const Fixed &fixed) const {
	return this->_n != fixed.getRawBits();
}


Fixed Fixed::operator*(const Fixed & fixed) {
	this->_n *= fixed.getRawBits() / (1 <<_bits);
	return *this;
}

Fixed Fixed::operator/(const Fixed &fixed) {
	if (fixed.getRawBits() == 0)
		return (fixed);
	this->_n = (this->_n * (1 << _bits)) / fixed.getRawBits();
	return *this;
}

Fixed Fixed::operator+(const Fixed &fixed) {
	this->_n += fixed.getRawBits();
	return *this;
}

Fixed Fixed::operator-(const Fixed &fixed) {
	this->_n -= fixed.getRawBits();
	return *this;
}

Fixed & Fixed::operator++() {
	this->_n++;
	return *this;
}

Fixed & Fixed::operator--() {
	this->_n--;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed copy = *this;
	copy.setRawBits(this->_n++);
	return copy;
}

Fixed Fixed::operator--(int ) {
	Fixed copy = *this;
	copy.setRawBits(this->_n--);
	return copy;
}

Fixed &Fixed::max(Fixed &fixed1, Fixed &fixed2) {
	return (fixed1 > fixed2) ? fixed1 : fixed2;
}

const Fixed &Fixed::max(const Fixed &fixed1, const Fixed &fixed2) {
	return (fixed1 > fixed2 ? fixed1 : fixed2);
}

Fixed &Fixed::min(Fixed &fixed1, Fixed &fixed2) {
	return (fixed1 < fixed2) ? fixed1 : fixed2;
}

const Fixed &Fixed::min(const Fixed &fixed1, const Fixed &fixed2) {
	return (fixed1 < fixed2) ? fixed1 : fixed2;
}
