#include "Karen.hpp"

Karen::Karen(std::string name) : _name(name) {
    std::cout << this->_name << ": Do you know who I am?" << std::endl;
}

Karen::~Karen() {
    std::cout << this->_name << ": You’ll never disrespect me like that again" << std::endl;
}

void Karen::debug() {
    std::cout << "I love to get extra bacon for my"
                 "7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info() {
    std::cout << "I cannot believe adding extra bacon cost more money. "
                 "You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. "
                 "I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error() {
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level) {
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    typedef void(Karen::*message) ();
    message things[4] = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
    for (int i = 0; i < 4; ++i) {
        if (levels[i] == level)
        {
            std::cout << this->_name << ": ";
            (this->*things[i])();
            return;
        }
    }
}