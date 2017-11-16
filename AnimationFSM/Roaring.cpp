#include "Shovelling.h"
#include "Idle.h"
#include "Jumping.h"
#include "Hammering.h"
#include "Roaring.h"
#include "Walking.h"
#include "Swordmanship.h"

#include <string>

void Roaring::idle(Animation* a)
{
	std::cout << "roaring -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Roaring::jumping(Animation* a)
{
	std::cout << "roaring -> Jump" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}

void Roaring::walking(Animation * a)
{
	std::cout << "roaring -> Walking" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}

void Roaring::swordmanship(Animation * a)
{
	std::cout << "roaring -> Swordmanship" << std::endl;
	a->setCurrent(new Swordmanship());
	delete this;
}

void Roaring::shovelling(Animation * a)
{
	std::cout << "roaring -> Shovelling" << std::endl;
	a->setCurrent(new Shovelling());
	delete this;
}

void Roaring::hammering(Animation * a)
{
	std::cout << "roaring -> Hammering" << std::endl;
	a->setCurrent(new Hammering());
	delete this;
}
