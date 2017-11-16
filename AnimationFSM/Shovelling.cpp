#include "Shovelling.h"
#include "Idle.h"
#include "Jumping.h"
#include "Hammering.h"
#include "Roaring.h"
#include "Walking.h"
#include "Swordmanship.h"

#include <string>

void Shovelling::idle(Animation * a)
{
	std::cout << "Shovelling -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Shovelling::jumping(Animation * a)
{
	std::cout << "Shovelling -> Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}

void Shovelling::roaring(Animation * a)
{
	std::cout << "Shovelling -> Roaring" << std::endl;
	a->setCurrent(new Roaring());
	delete this;
}

void Shovelling::walking(Animation * a)
{
	std::cout << "Shovelling -> Walking" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}

void Shovelling::swordmanship(Animation * a)
{
	std::cout << "Shovelling -> Swordmanship" << std::endl;
	a->setCurrent(new Swordmanship());
	delete this;
}

void Shovelling::hammering(Animation * a)
{
	std::cout << "Shovelling -> Hammering" << std::endl;
	a->setCurrent(new Hammering());
	delete this;
}
