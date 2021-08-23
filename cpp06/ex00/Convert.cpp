# include "Convert.hpp"

Convert::Convert() {

}

Convert::~Convert() {

}

Convert::Convert(const Convert &scalar) {
	*this = scalar;
}

Convert &Convert::operator=(const Convert &scalar) {
	this->_v = scalar._v;
	return *this;
}

Convert::Convert(const char *lit) {
	this->_v = atof(lit);
}

void Convert::casts() const {
	charCast();
	intCast();
	floatCast();
	doubleCast();
}

void Convert::charCast() const {
	std::cout << "char: ";
	int castInt = static_cast<int>(_v);
	if (castInt < 0 || castInt > 255)
		std::cout << "impossible" << std::endl;
	else if (!isprint(castInt))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << static_cast<char>(castInt) << std::endl;
}

void Convert::intCast() const {
	std::cout << "int: ";
	int cast = static_cast<int>(_v);
	if (!(this->_v >= pow(-2, 63) && this->_v < pow(2, 63))
		|| (this->_v < INT_MIN || this->_v > INT_MAX)) // pow(2, 63) - double representation of INT64_MAX
		std::cout << "impossible" << std::endl;
	else
		std::cout << cast << std::endl;
}

void Convert::floatCast() const {
	std::cout << "float: ";
	float cast = static_cast<float>(_v);
	std::cout << std::fixed << std::setprecision(1) << cast;
	std::cout << "f" << std::endl;
}

void Convert::doubleCast() const {
	std::cout << "double: ";
	std::cout << std::fixed << std::setprecision(1) << _v << std::endl;
}
