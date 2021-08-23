#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
int n = 0;

template <typename T> void iter(T *arr, const int len, void(*func)(const T &arg)) {
	for (int i = 0; i < len && i < n; ++i)
        func(arr[i]);
}

#endif
