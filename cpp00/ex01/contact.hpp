#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <iostream>

class Contact {

public:

	Contact();
	void		setContact(int i, const std::string& input);
	void		setStatus(bool newOld);
	void		setEmpty(bool setEmpty);
	std::string	getContact(int i);
	bool		getStatus() const;
	bool		getEmpty() const;
	bool		update(std::string prompt[5]);

private:

	std::string	_contact[5];
	bool		_oldest;
	bool		_empty;
};

#endif
