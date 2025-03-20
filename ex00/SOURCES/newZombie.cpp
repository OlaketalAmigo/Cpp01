#include "Zombie.hpp"

Zombie *newZombie( std::string name )
{
	Zombie *Agent008 = new Zombie();
	Agent008->setName(name);
	Agent008->announce();
	return (Agent008);
}
