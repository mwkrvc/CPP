# include "Karen.hpp"

Karen::Karen() {

}

Karen::~Karen() {

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
	int i;
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	typedef void(Karen::*message) ();
	message things[4] = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	for (i = 0; i < 4; ++i) {
		if (levels[i] == level)
			break;
	}
	switch (i)
	{
		case DEBUG:
			std::cout << "[ DEBUG ]" << std::endl;
			(this->*things[DEBUG])();
		case INFO:
			std::cout << "[ INFO ]" << std::endl;
			(this->*things[INFO])();
		case WARNING:
			std::cout << "[ WARNING ]" << std::endl;
			(this->*things[WARNING])();
		case ERROR:
			std::cout << "[ ERROR ]" << std::endl;
			(this->*things[ERROR])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
