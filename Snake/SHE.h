#pragma once

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
	void Draw(CDC*pDC);
	void  GetBody()const;
private:
	vector<CPoint>Body;
	Direction currentDirection;

};

