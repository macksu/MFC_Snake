#include "pch.h"
#include "SHE.h"
#include <string>
#define BodySize 40
void SHE::Init()
{
	currentDirection = Direction::RIGHT;  //��ʼ��������
	Body.push_back(CPoint(9,10));
	Body.push_back(CPoint(10,10));
	Body.push_back(CPoint(11,10));
	//������

}

void SHE::Move(Direction dir)
{
	int headX = Body.front().x;
	int headY = Body.front().y;

	switch (currentdirection) {
	case Direction::UP:
		headY--;
		break;
	case Direction::DOWN:
		headY++;
		break;
	case Direction::LEFT:
		headX--;
		break;
	case Direction::RIGHT:
		headX++;
		break;
	}

	Body.insert(Body.begin(), CPoint(headX, headY));
	Body.pop_back();

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
	CBrush brush(RGB(0, 255, 0));  //ʹ����ɫ��ˢ
	for (CPoint& Point : Body) {
		int left = Point.x * 20;  //ÿ������Ĵ�СΪ20*20
		int top = Point.y * 20;
		int right = left + 20;
		int bottom = top + 20;
		pDC->SelectObject(&brush);
		pDC->Rectangle(left, top, right, bottom); //�����������ÿһ��
	}

}

vector<CPoint>& SHE::GetBody() const
{
	// TODO: �ڴ˴����� return ���
	return ;
}

void SHE::setDirection(Direction dir)
{
	if (dir == Direction::UP && currentDirection != Direction::DOWN ||
		dir == Direction::DOWN && currentDirection != Direction::UP ||
		dir == Direction::LEFT && currentDirection != Direction::RIGHT ||
		dir == Direction::RIGHT && currentDirection != Direction::LEFT)
		currentDirection = dir;
}

void SHE::GAMEOVER()
{
	//��Ϸ����
	if(Body.push_back(CPoint(9, 10));)
}
