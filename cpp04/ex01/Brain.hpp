#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(std::string ideas[100]);
        Brain(const Brain *copy);
        Brain& operator=(const Brain *copy);
        std::string* getIdeas(void);
        ~Brain();
};
#endif