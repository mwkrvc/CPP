#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <list>
# include <vector>
# include <deque>

template <class T>
typename T::const_iterator easyfind(const T &arr, int val)
{
	typename T::const_iterator it = find(arr.begin(), arr.end(), val);
	if (it == arr.end())
	{
		std::cout << "No occurence of " << val << " in array" << std::endl;
		throw std::exception();
	}
	return it;
}

# endif