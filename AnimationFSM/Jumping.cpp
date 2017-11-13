#include "Shovelling.h"
#include "Idle.h"
#include "Jumping.h"
#include "Hammering.h"
#include "Climbing.h"
#include "Walking.h"
#include "Swordmanship.h"

#include <string>

void Jumping::idle(Animation* a)
{
	std::cout << "Jumping -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Jumping::climbing(Animation* a)
{
	std::cout << "Jumping -> Climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}

void Jumping::walking(Animation * a)
{
	std::cout << "Jumping -> Walking" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}

void Jumping::swordmanship(Animation * a)
{
	std::cout << "Jumping -> Swordmanship" << std::endl;
	a->setCurrent(new Swordmanship());
	delete this;
}

void Jumping::shovelling(Animation * a)
{
	std::cout << "Jumping -> Shovelling" << std::endl;
	a->setCurrent(new Shovelling());
	delete this;
}

void Jumping::hammering(Animation * a)
{
	std::cout << "Jumping -> Hammering" << std::endl;
	a->setCurrent(new Hammering());
	delete this;
}
