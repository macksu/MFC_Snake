#include "pch.h"
#include "SHE.h"
#include <string>
#define BodySize 40
void SHE::Init()
{
	currentDirection = Direction::RIGHT;  //初始方向向右
	Body.push_back(CPoint(9,10));
	Body.push_back(CPoint(10,10));
	Body.push_back(CPoint(11,10));

}

void SHE::Move(Direction dir)
{
	char ch;
	ch = _getwch();
	switch (ch)
	{
	case  UP:
		if(currentDirection !=Direction::DOWN) 
	case DOWN:
		if (currentDirection != Direction::UP)
	case  LEFT:
		if (currentDirection != Direction::RIGHT)
	case  RIGHT:
		if (currentDirection != Direction::LEFT)
	default:
		break;
	}
}

bool SHE::CheckCollision(int x, int y) const
{
	return false;
}

void SHE::GROW()
{
}

void SHE::Draw(CDC*pDC)
{
	CBrush brush(RGB(0, 255, 0));  //使用绿色画刷
	for (CPoint& Point : Body) {
		int left = Point.x * 20;  //每节身体的大小为20*20
		int top = Point.y * 20;
		int right = left + 20;
		int bottom = top + 20;
		pDC->SelectObject(&brush);
		pDC->Rectangle(left, top, right, bottom); //绘制蛇身体的每一节
	}

}

vector<CPoint>& SHE::GetBody() const
{
	// TODO: 在此处插入 return 语句
	return ;
}

void SHE::GAMEOVER()
{
}
