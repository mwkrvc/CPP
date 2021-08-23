#ifndef BRAIN_CLASS_HPP
# define BRAIN_CLASS_HPP

# include <iostream>

class Brain {
public:
    Brain();
    Brain(Brain const & brain);
    ~Brain();
    Brain & operator=(Brain const & brain);
    std::string *getIdeas();
    void setIdeas(const std::string& idea);

private:
    std::string ideas[100];
};

#endif
