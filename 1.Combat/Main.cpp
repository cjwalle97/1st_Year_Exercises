#include <iostream>
#include <string>
#include "Entity.h"
#include "Dragon.h"
#include "Spartan.h"

int main()
{
	Entity* Spyro = new Dragon(100, 40, 60, "Spyro");
	Entity* Chief = new Spartan();
	Spyro->Attack(*Chief);
	return 0;
}