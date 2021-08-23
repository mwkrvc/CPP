#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>

class Fixed {

public:

    Fixed();								// default constructor
    Fixed(Fixed const & fixed);				// copy constructor
    ~Fixed();								// destructor

    Fixed & operator=(Fixed const & fixed);	// copy assignment operator
    int getRawBits() const;
    void setRawBits(int const raw);

private:

    int					_n;
    static const int	_bits = 8;
};

#endif