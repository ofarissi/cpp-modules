#ifndef DOG_HPP
#define DOG_HPP

#include    "Animal.hpp"
#include    "Brain.hpp"

class Dog : public Animal
{
    private:
            Brain *brain;
    public:
            Dog();
            Dog(const Dog& source);
            ~Dog();
            Dog& operator=(const Dog& source);
            void    makeSound() const;
            std::string getType() const;
        	void getIdeas(void)const;
	    	void setIdea(int i, std::string idea);
};


#endif