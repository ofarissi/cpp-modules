#include    "Dog.hpp"

Dog::Dog() : Animal()
{
    this->type = "Dog";
    std::cout << "Dog Constructor Called" << std::endl;
    this->brain = new Brain();
	if (this->brain == NULL)
	{
		perror("Dog Brain allocation failed");
		std::cerr << "Exiting the process." << std::endl;
		exit(1);
	}
}

Dog::Dog(const Dog& source) : Animal(source)
{
    std::cout << "Dog Copy Constructor Called" << std::endl;
    this->type = source.type;
    this->brain = new Brain();
	if (this->brain == NULL)
	{
		perror("Dog Brain allocation failed");
		std::cerr << "Exiting the process." << std::endl;
		exit(1);
	}
	*this->brain = *source.brain;
}

Dog& Dog::operator=(const Dog& source)
{
    std::cout << "Dog Copy assignement operator Called" << std::endl;
    if (this == &source)
    {
        return *this;
    }
    this->type = source.type;
    this->brain = new Brain();
	if (this->brain == NULL)
	{
		perror("Dog Brain allocation failed");
		std::cerr << "Exiting the process." << std::endl;
		exit(1);
	}
	*this->brain = *source.brain;
    return *this;
}

std::string    Dog::getType() const
{
    return this->type;
}

Dog::~Dog()
{
    delete(this->brain);
    std::cout << "Dog Destructor Called" << std::endl;
}

void    Dog::makeSound() const
{
    std::cout << "Woof Woof" << std::endl;
}

void	Dog::getIdeas(void) const
{
	for (int i = 0; i < 3; i++)
		std::cout << "Idea " << i << " of the Dog is: " << this->brain->getIdea(i) << std::endl;
}

void	Dog::setIdea(int i, std::string idea)
{
		this->brain->setIdea(idea, i);
}