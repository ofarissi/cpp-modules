#include    "Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << "Cat Constructor Called" << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
	if (this->brain == NULL)
	{
		perror("Cat Brain allocation failed");
		std::cerr << "Exiting the process." << std::endl;
		exit(1);
	}
}

Cat::Cat(const Cat& source) : Animal(source)
{
    std::cout << "Cat Copy Constructor Called" << std::endl;
    this->type = source.type;
    this->brain = new Brain();
	if (this->brain == NULL)
	{
		perror("Cat Brain allocation failed");
		std::cerr << "Exiting the process." << std::endl;
		exit(1);
	}
	*this->brain = *source.brain;
}

Cat& Cat::operator=(const Cat& source)
{
    std::cout << "Cat Copy assignement operator Called" << std::endl;
    if (this == &source)
    {
        return *this;
    }
    this->brain = new Brain();
	if (this->brain == NULL)
	{
		perror("Cat Brain allocation failed");
		std::cerr << "Exiting the process." << std::endl;
		exit(1);
	}
	*this->brain = *source.brain;
    this->type = source.type;
    return *this;
}

std::string    Cat::getType() const
{
    return this->type;
}

Cat::~Cat()
{
    delete(this->brain);
    std::cout << "Cat Destructor Called" << std::endl;
}

void    Cat::makeSound() const
{
    std::cout << "Meaw Meaw" << std::endl;
}

void	Cat::getIdeas() const
{
	for (int i = 0; i < 3; i++)
		std::cout << "Idea " << i << " of the Cat is: " << this->brain->getIdea(i) << std::endl;
}

void	Cat::setIdea(int i, std::string idea)
{
		this->brain->setIdea(idea, i);
}