#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>
# include <cmath>

class Fixed {

public:

	Fixed();								// default constructor
	Fixed(Fixed const & fixed);				// copy constructor
	~Fixed();								// destructor
	Fixed & operator=(Fixed const & src);	// copy assignment operator

	Fixed(int const n);
	Fixed(float const f);

	int getRawBits() const;
	void setRawBits(int const raw);

	float toFloat() const;
	int toInt() const;

private:

	int _n;
	static const int _bits = 8;
};

std::ostream  & operator<<(std::ostream & o, Fixed const & src);

#endif