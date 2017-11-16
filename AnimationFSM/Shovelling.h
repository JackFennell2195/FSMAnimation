#ifndef SHOVELLING_H
#define SHOVELLING_H

#include <State.h>

class Shovelling : public State
{
public:
	Shovelling() {};
	~Shovelling() {};
	void idle(Animation* a);
	void jumping(Animation* a);
	void roaring(Animation* a);
	void walking(Animation *a);
	void swordmanship(Animation *a);
	void hammering(Animation *a);
};

#endif // !IDLE_H
