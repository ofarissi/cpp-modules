#include    "ScavTrap.hpp"

int main()
{
		// ClapTrap a;
		// ClapTrap b("Human");

		// a.attack("another Human");
		// a.takeDamage(10);
		// a.takeDamage(10);
		// a.beRepaired(5);
		// a.attack("A monster");
		// b.beRepaired(3);
		// for (int i = 0; i < 12; i++)
			// b.attack("A big monster");
		// b.beRepaired(3);

		ScavTrap c;
		ScavTrap d("Strong human");

		c.attack("robot");
		// for (int i = 0; i < 50; i++)
		// 	c.attack("CloneTrap");
		c.beRepaired(22);
		c.takeDamage(21);
		c.beRepaired(20);
		c.guardGate();
		c.guardGate();
		d.attack("another robot");
		d.takeDamage(101);
		d.takeDamage(15);
		d.attack("another robot");
		return (0);
}