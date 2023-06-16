#include    "ClapTrap.hpp"

int main()
{
		ClapTrap a;
		ClapTrap b("Human");

		a.attack("another Human");
		a.takeDamage(10);
		a.takeDamage(10);
		a.beRepaired(5);
		a.attack("A monster");
		b.beRepaired(3);
		for (int i = 0; i < 12; i++)
			b.attack("A big monster");
		b.beRepaired(3);
	return (0);
}