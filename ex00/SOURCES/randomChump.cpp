#include "Zombie.hpp"

void randomChump( std::string name)
{
	Zombie Agent007 = Zombie();
	Agent007.setName(name);
	Agent007.announce();
}