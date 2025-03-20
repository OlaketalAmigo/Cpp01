#include <iostream>
#include <cstring>
#include <string>

#pragma once

class Zombie {
	private:
		std::string _name;

	public:
		Zombie();
		~Zombie();
		void announce (void);
		void setName(std::string name);
};

Zombie* newZombie( std::string name);
void randomChump(std::string name);
