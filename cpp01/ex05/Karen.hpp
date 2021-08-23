#ifndef KAREN_CLASS_HPP
# define KAREN_CLASS_HPP

#include <iostream>

class Karen {

public:
    void complain(std::string level);
    Karen(std::string name);
    ~Karen();

private:
    void debug();
    void info();
    void warning();
    void error();
    std::string _name;
};

#endif