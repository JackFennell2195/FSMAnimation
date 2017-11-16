#ifndef JUMPING_H
#define JUMPING_H

#include <State.h>

class Jumping : public State
{
public:
	Jumping() {};
	~Jumping() {};
	void idle(Animation* a);
	void roaring(Animation* a);
	void walking(Animation *a);
	void swordmanship(Animation *a);
	void shovelling(Animation *a);
	void hammering(Animation *a);
};

#endif // !IDLE_H