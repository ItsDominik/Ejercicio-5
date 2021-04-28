#include "CBeta.h"

CBeta::CBeta(int x, int y)
{
	this->x = x;
	this->y = y;
	this->a = 3;
	this->l = 12;
	this->dy = 1;
	this->dx = 0;
	this->color = 0;
}

CBeta::~CBeta()
{
}

void CBeta::mover(int MAXW, int MAXH)
{
	borrar();
	this->x += dx;
	this->y += dy;
	mostrar();
}

void CBeta::mostrar()
{
	Console::SetCursorPosition(x + 7, y); cout << ".---.";
	Console::SetCursorPosition(x + 1, y + 1); cout << "_/__~0_\_";
	Console::SetCursorPosition(x, y + 2); cout << "(_________)";
}
