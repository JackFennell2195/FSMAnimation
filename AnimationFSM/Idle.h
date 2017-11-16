#ifndef IDLE_H
#define IDLE_H

#include <State.h>

class Idle : public State
{
public:
	Idle() {};
	~Idle() {};
	void handleInput();
	void update();
	void jumping(Animation* a);
	void roaring(Animation* a);
	void walking(Animation *a);
	void swordmanship(Animation *a);
	void shovelling(Animation *a);
	void hammering(Animation *a);
};

#endif // !IDLE_H