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

	bool operator<(const Fixed & fixed) const;
	bool operator>(const Fixed & fixed) const;
	bool operator>=(const Fixed & fixed) const;
	bool operator<=(const Fixed & fixed) const;
	bool operator==(const Fixed & fixed) const;
	bool operator!=(const Fixed & fixed) const;

	Fixed operator*(const Fixed & fixed);
	Fixed operator+(const Fixed & fixed);
	Fixed operator-(const Fixed & fixed);
	Fixed operator/(const Fixed & fixed);

	Fixed & operator++();
	Fixed & operator--();
	Fixed operator++(int);
	Fixed operator--(int);

	static Fixed & max(Fixed & fixed1, Fixed & fixed2);
	const static Fixed & max(const Fixed & fixed1, const Fixed & fixed2);
	static Fixed & min(Fixed & fixed1, Fixed & fixed2);
	const static Fixed & min(const Fixed & fixed1, const Fixed & fixed2);

private:

	int _n;
	static const int _bits = 8;
};

std::ostream  & operator<<(std::ostream & o, Fixed const & src);

#endif
