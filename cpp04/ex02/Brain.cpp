#include    "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default Constructor Called" << std::endl;
}

Brain::Brain(const Brain& source)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = source.ideas[i];
    std::cout << "Brain Copy Constructor Called" << std::endl;
}

Brain& Brain::operator=(const Brain& source)
{
    if (this == &source)
    {
        return *this;
    }
    for (int i = 0; i < 100; i++)
        this->ideas[i] = source.ideas[i];
    std::cout << "Brain Assignement operator Called" << std::endl;
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor Called" << std::endl;
}

void    Brain::setIdea(std::string idea, int i)
{
    if (i < 0  || i > 99)
        std::cout << "Wrong index !!" << std::endl;
    else
        this->ideas[i] = idea;
}

std::string Brain::getIdea(int i) const
{
    if (i < 0  || i > 99) {
        std::cout << "Wrong index !!" << std::endl;
        return 0;
    }
    return this->ideas[i];
}
