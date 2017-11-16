#ifndef ROARING_H
#define ROARING_H

#include <State.h>

class Roaring : public State
{
public:
	Roaring() {};
	~Roaring() {};
	void idle(Animation* a);
	void jumping(Animation* a);
	void walking(Animation *a);
	void swordmanship(Animation *a);
	void shovelling(Animation *a);
	void hammering(Animation *a);
};

#endif // !IDLE_H