#ifndef SWORDMANSHIP_H
#define SWORDMANSHIP_H

#include <State.h>

class Swordmanship : public State
{
public:
	Swordmanship() {};
	~Swordmanship() {};
	void idle(Animation* a);
	void jumping(Animation* a);
	void climbing(Animation* a);
	void walking(Animation *a);
	void shovelling(Animation *a);
	void hammering(Animation *a);
};

#endif // !IDLE_H
