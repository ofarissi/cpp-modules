#ifndef CAT_HPP
#define CAT_HPP

#include    "Animal.hpp"
#include    "Brain.hpp"

class Cat : public Animal {
    private:
            Brain *brain;
    public:
            Cat();
            Cat(const Cat& source);
            ~Cat();
            Cat& operator=(const Cat& source);
            void    makeSound() const;
            std::string getType() const;
    		void getIdeas()const;
		    void setIdea(int i, std::string idea);
};


#endif