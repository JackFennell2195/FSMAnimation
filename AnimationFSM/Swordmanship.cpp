#include "Shovelling.h"
#include "Idle.h"
#include "Jumping.h"
#include "Hammering.h"
#include "Roaring.h"
#include "Walking.h"
#include "Swordmanship.h"

#include <string>

void Swordmanship::idle(Animation * a)
{
	std::cout << "Swordmanship -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Swordmanship::jumping(Animation * a)
{
	std::cout << "Swordmanship -> Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}

void Swordmanship::roaring(Animation * a)
{
	std::cout << "Swordmanship -> Climbing" << std::endl;
	a->setCurrent(new Roaring());
	delete this;
}

void Swordmanship::walking(Animation * a)
{
	std::cout << "Swordmanship -> Walking" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}

void Swordmanship::shovelling(Animation * a)
{
	std::cout << "Swordmanship -> Shovelling" << std::endl;
	a->setCurrent(new Shovelling());
	delete this;
}

void Swordmanship::hammering(Animation * a)
{
	std::cout << "Swordmanship -> Hammering" << std::endl;
	a->setCurrent(new Hammering());
	delete this;
}
