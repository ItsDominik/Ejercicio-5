#include "CGamma.h"

CGamma::CGamma(int x, int y)
{
	this->x = x;
	this->y = y;
	this->a = 10;
	this->l = 19;
	this->dy = 1;
	this->dx = 0;
}

CGamma::~CGamma()
{
}

void CGamma::mover()
{
	borrar();
	this->x += dx;
	this->y += dy;
	mostrar();
}

void CGamma::mostrar()
{
	Console::SetCursorPosition(x + 9, y); cout << ".";
	Console::SetCursorPosition(x + 9, y + 1); cout << "|";
	Console::SetCursorPosition(x + 6, y + 2); cout << ".-" << char(34) << "^" << char(34) << "-.";
	Console::SetCursorPosition(x + 5, y + 3);	 cout << "/_....._\\";
	Console::SetCursorPosition(x + 1, y + 4); cout << ".-" << char(34) << "`         `" << char(34) << "-..";
	Console::SetCursorPosition(x, y + 5); cout << "(  ooo  ooo  ooo  )";
	Console::SetCursorPosition(x + 1, y + 6);
}
