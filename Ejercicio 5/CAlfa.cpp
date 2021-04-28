#include "CAlfa.h"

CAlfa::CAlfa()
{
}

CAlfa::CAlfa(int x, int y)
{
	this->x = x;
	this->y = y;
	this->a = 5;
	this->l = 21;
	this->dy = 1;
	this->dx = 0;
	this->color = 0;
}

CAlfa::~CAlfa()
{
}

void CAlfa::mover(int MAXW, int MAXH)
{
	borrar();
	this->x += dx;
	this->y += dy;
	mostrar();
}

void CAlfa::mostrar()
{
	Console::SetCursorPosition(x + 7, y);     cout << "_.---._";
	Console::SetCursorPosition(x + 7, y + 1); cout << ".'       '.";
	Console::SetCursorPosition(x + 1, y + 2); cout << "_.-~===========~-._";
	Console::SetCursorPosition(x, y + 3);     cout << "(_________________)";
	Console::SetCursorPosition(x + 6, y + 4);   cout << "\_______/";
}
