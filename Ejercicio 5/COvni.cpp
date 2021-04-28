#include "COvni.h"

COvni::COvni()
{
}

COvni::COvni(int x, int y, int a, int l)
{
	this->x = x;
	this->y = y;
	this->a = a;
	this->l = l;
}

COvni::~COvni()
{
}

void COvni::borrar()
{
	for (int i = 0; i < l; i++)
	{
		for (int j = 0; j < a; j++)
		{
			Console::SetCursorPosition(x + i, y + j);
		}
	}
}
void COvni::mostrar()
{
}
void COvni::mover(int MAXW, int MAXH)
{
}
void COvni::setDx(int dx)
{
	this->dx = dx;
}
void COvni::setDy(int dy)
{
	this->dy = dy;
}
int COvni::getX()
{
	return this->x;
}

int COvni::getY()
{
	return this->y;
}

int COvni::getDx()
{
	return this->dx;
}

int COvni::getDy()
{
	return this->dy;
}

int COvni::getA()
{
	return this->a;
}

int COvni::getL()
{
	return this->l;
}

int COvni::getColor()
{
	return this->color;
}
