#include    "HumanA.hpp"
#include    "HumanB.hpp"

int main()
{
    Weapon club;
    club.setType("Sword");

    HumanA bob(club, "bob");
    bob.attack();

    club.setType("Hamer");
    bob.attack();

    HumanB jim("jim");
    jim.setWeapon(club);
    jim.attack();

    club.setType("knive");
    jim.attack();

    HumanB alex("alex");
    alex.attack();
}