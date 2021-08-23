# include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain constructor called" << std::endl;
}

std::string *Brain::getIdeas() {
	return this->ideas;
}

Brain::Brain(const Brain &brain) {
    std::cout << "Brain copy constructor called" << std::endl;
    *this = brain;
}

Brain::~Brain() {
    std::cout << "Brain destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &brain) {
    std::cout << "Brain assignation operator called" << std::endl;
    if (this != &brain)
    {
        for (int i = 0; i < 100; ++i) {
            this->ideas[i] = brain.ideas[i];
        }
    }
    return *this;
}

void Brain::setIdeas(const std::string& idea) {
	for (int i = 0; i < 100; ++i) {
		this->ideas[i] = idea;
	}
}
