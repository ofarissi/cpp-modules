#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal	*animal = new Animal();
	std::cout << "type: " << animal->getType() << std::endl;
	animal->makeSound();
	delete animal;

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

	return (0);
}