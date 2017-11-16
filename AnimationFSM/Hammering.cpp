#include "Shovelling.h"
#include "Idle.h"
#include "Jumping.h"
#include "Hammering.h"
#include "Roaring.h"
#include "Walking.h"
#include "Swordmanship.h"

#include <string>

void Hammering::idle(Animation * a)
{
	std::cout << "Hammering -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Hammering::jumping(Animation * a)
{
	std::cout << "Hammering -> Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}

void Hammering::roaring(Animation * a)
{
	std::cout << "Hammering -> Roaring" << std::endl;
	a->setCurrent(new Roaring());
	delete this;
}

void Hammering::walking(Animation * a)
{
	std::cout << "Hammering -> Walking" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}

void Hammering::swordmanship(Animation * a)
{
	std::cout << "Hammering -> Swordmanship" << std::endl;
	a->setCurrent(new Swordmanship());
	delete this;
}

void Hammering::shovelling(Animation * a)
{
	std::cout << "Hammering -> Shovelling" << std::endl;
	a->setCurrent(new Shovelling());
	delete this;
}
