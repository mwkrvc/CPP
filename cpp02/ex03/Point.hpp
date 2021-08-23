#ifndef POINT_CLASS_HPP
# define POINT_CLASS_HPP
# include "Fixed.hpp"

class Point {

public:

	Point();								// default constructor
	Point(Point const & point);				// copy constructor
	~Point();								// destructor
	Point & operator=(Point const & point);	// copy assignment operator

	Point(float const x, float const  y);
	Point(const Fixed & x, const Fixed & y);

	Fixed getX() const;
	Fixed getY() const;

private:
	Fixed const _x;
	Fixed const _y;

};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
