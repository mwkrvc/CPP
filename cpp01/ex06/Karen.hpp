#ifndef KAREN_CLASS_HPP
# define KAREN_CLASS_HPP

#include <iostream>
# define DEBUG 0
# define INFO 1
# define WARNING 2
# define ERROR 3

class Karen {

public:
    void complain(std::string level);
    Karen();
    ~Karen();

private:
    void debug();
    void info();
    void warning();
    void error();
};

#endif