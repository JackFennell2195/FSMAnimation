#include "Shovelling.h"
#include "Idle.h"
#include "Jumping.h"
#include "Hammering.h"
#include "Roaring.h"
#include "Walking.h"
#include "Swordmanship.h"

#include <string>

void Walking::idle(Animation * a)
{
	std::cout << "Walking -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Walking::jumping(Animation * a)
{
	std::cout << "Walking -> Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}

void Walking::roaring(Animation * a)
{
	std::cout << "Walking -> Climbing" << std::endl;
	a->setCurrent(new Roaring());
	delete this;
}

void Walking::swordmanship(Animation * a)
{
	std::cout << "Walking -> Swordmanship" << std::endl;
	a->setCurrent(new Swordmanship());
	delete this;
}

void Walking::shovelling(Animation * a)
{
	std::cout << "Walking ->Shovelling" << std::endl;
	a->setCurrent(new Shovelling());
	delete this;
}

void Walking::hammering(Animation * a)
{
	std::cout << "Walking -> Hammering" << std::endl;
	a->setCurrent(new Hammering());
	delete this;
}
