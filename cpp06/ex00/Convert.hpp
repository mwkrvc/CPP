#ifndef CONVERT_CLASS_HPP
# define CONVERT_CLASS_HPP

# include <iostream>
# include <cmath>
# include <iomanip>

class Convert {
public:
	Convert();
	~Convert();
	Convert(Convert const & scalar);
	Convert & operator=(Convert const & scalar);

	Convert(const char *lit);
	void casts() const;
	void charCast() const;
	void intCast() const;
	void floatCast() const;
	void doubleCast() const;

private:
	double _v;
};

#endif