#ifndef HAMMERING_H
#define HAMMERING_H

#include <State.h>

class Hammering : public State
{
public:
	Hammering() {};
	~Hammering() {};
	void idle(Animation* a);
	void jumping(Animation* a);
	void roaring(Animation* a);
	void walking(Animation *a);
	void swordmanship(Animation *a);
	void shovelling(Animation *a);
};

#endif // !IDLE_H
