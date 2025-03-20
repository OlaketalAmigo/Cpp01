#include "Zombie.hpp"

int main( void)
{
	Zombie *a;
	Zombie *b;

	a = newZombie("Bob la menace");
	b = newZombie("Geraldine la charogne");
	
	randomChump("Billy in the water");
	randomChump("Marjolene the Grudge");
	
	delete(a);
	delete(b);
}