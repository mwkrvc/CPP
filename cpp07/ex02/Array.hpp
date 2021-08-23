#ifndef ARRAY_CLASS_HPP
#define ARRAY_CLASS_HPP

# include <iostream>

template <class T>
class Array {
public:
    Array() {
        _arr = 0;
        _n = 0;
    }
    Array(unsigned int num) {
    	this->_arr = new T[num];
    	this->_n = num;
    }
    Array(Array const & array) {
    	this->_n = array._n;
    	this->_arr = new T[this->_n];
    	for (int i = 0; i < array._n; ++i) {
    		this->_arr[i] = array._arr[i];
    	}
    }
    Array & operator=(Array const & array) {
    	if (this == &array)
    		return *this;
    	if (this->_arr)
    		delete[] this->_arr;
    	this->_n = array._n;
    	this->_arr = new T[this->_n];
    	for (int i = 0; i < array._n; ++i) {
    		this->_arr[i] = array._arr[i];
    	}
    	return *this;
    }
    class IndexException : public std::exception {
    public:
    	virtual const char * what() const throw() {
    		return "Invalid";
    	}
    };
    T & operator[](int index) {
    	if (index < 0 || indcex > _n - 1)
    		throw IndexException();
    	return _arr[index];
    }
    int size() const {
        return _n;
    }
    ~Array() {
    	delete[] _arr;
    }
private:
    T *_arr;
    int _n;
};

#endif