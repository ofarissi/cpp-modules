#include    "Zombie.hpp"

int main()
{
    Zombie  z1("objmane");
    Zombie  z2("hamza");
    Zombie  *z3;

    z1.announce();
    z2.announce();
    z3 = newZombie("taha");
    z3->announce();
    delete z3;

    randomChump("youssef");
}