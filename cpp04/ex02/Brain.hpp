#ifndef BRAIN_HPP
#define BRAIN_HPP

#include    <iostream>

class Brain{
    private:
            std::string ideas[100];
    public:
            Brain();
            Brain(const Brain& source);
            Brain& operator=(const Brain& source);
            ~Brain();
            std::string getIdea(int i) const;
            void    setIdea(std::string idea, int i);
};

#endif