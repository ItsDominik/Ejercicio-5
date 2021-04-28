#include "CAlfa.h"

CAlfa::CAlfa()
{
}

CAlfa::~CAlfa()
{
}

void CAlfa::mover()
{
	borrar();
	this->x += dx;
	this->y += dy;
	mostrar();
}

void CAlfa::mostrar()
{
	cout << '*';
}
