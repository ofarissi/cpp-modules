#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{

	// const Animal	*animal = new Animal();
	// std::cout << "type: " << animal->getType() << std::endl;
	// animal->makeSound();
	// delete animal;

	std::cout << "\t*************" << std::endl;

	const Animal	*cat = new Cat();
	std::cout << "type: " << cat->getType() << std::endl;
	cat->makeSound();
	delete cat;

	std::cout << "\t*************" << std::endl;

	const Animal	*dog = new Dog();
	std::cout << "type: " << dog->getType() <<std::endl;
	dog->makeSound();
	delete dog;

	std::cout << "\t*************" << std::endl;

	const WrongAnimal	*wrong_animal = new WrongAnimal();
	std::cout << "type: " << wrong_animal->getType() << std::endl;
	wrong_animal->makeSound();
	delete wrong_animal;

	std::cout << "\t*************" << std::endl;

	const WrongAnimal	*wrong_cat = new WrongCat();
	std::cout << "type: " << wrong_cat->getType() << std::endl;
	wrong_cat->makeSound();
	delete wrong_cat;

	// Dog *a = new Dog();
	Cat *a = new Cat();
	if (a == NULL)
	{
		perror("Allocation failed");
		std::cerr << "Exiting the process." << std::endl;
		exit(1);
	}

	a->setIdea(0, "I want to sniff");
	a->setIdea(1, "I want to take a shit");
	a->setIdea(2, "I have to pee");
	a->setIdea(200, "something");
	
	//Dog *b = new Dog(*a);
	Cat *b = new Cat(*a);
	if (b == NULL)
	{
		perror("Allocation failed");
		std::cerr << "Exiting the process" << std::endl;
		exit(1);
	}
	std::cout << "The " << a->getType() << " a has the following ideas: " << std::endl;
	a->getIdeas();
	delete(a);
	std::cout << "The " << b->getType() << " b has the following ideas: " << std::endl;
	b->getIdeas();
	delete(b);

	return (0);
}