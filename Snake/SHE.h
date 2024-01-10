#pragma once

struct Point {
	int x;
	int y;
	Point(int _x, int _y) :x(_x), y(_y) {}
};
enum class Direction {
	UP,
	DOWN,
	LEFT,
	RIGHT
};



class SHE
{
public:
	SHE();
	~SHE();

	void Init();
	void Move(Direction dir);
	bool CheckCollision(int x, int y) const;
	void GROW();
	vector<Point>& GetBody()const;
private:
	vector<Point>Body;
	Direction currentDirection;
};

