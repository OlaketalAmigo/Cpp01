#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Constructor Zombie Called" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Destructor Zombie Called for " << _name << std::endl;
}

void Zombie::announce( void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	_name = name;
}

