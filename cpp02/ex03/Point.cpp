#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point(const Point & point) {
	*this = point;
}

Point::Point(float const x, float const y) : _x(Fixed(x)), _y(Fixed(y)) {}

Point::~Point() {}

Point::Point(const Fixed & x, const Fixed & y) : _x(x), _y(y) {}

Point &Point::operator=(const Point &point) {
	new (this)Point(point._x, point._y);
	return *this;
}

Fixed Point::getX() const {
	return this->_x;
}

Fixed Point::getY() const {
	return this->_y;
}