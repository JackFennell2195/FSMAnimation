#ifndef INPUT_H
#define INPUT_H
class Input
{
public:
	Input();
	~Input();

	enum Action
	{
		IDLE,
		JUMP,
		ROAR,
		SWORD,
		HAMMER,
		SHOVEL,
		WALK
	};

	void setCurrent(Action);
	Action getCurrent();

private:
	Action m_current;
};
#endif