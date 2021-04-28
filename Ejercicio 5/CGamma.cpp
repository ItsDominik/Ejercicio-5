#include "CGamma.h"

CGamma::CGamma()
{
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
	cout << '+';
}
