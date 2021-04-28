#include "CBeta.h"

CBeta::CBeta()
{
}

CBeta::~CBeta()
{
}

void CBeta::mover()
{
	borrar();
	this->x += dx;
	this->y += dy;
	mostrar();
}

void CBeta::mostrar()
{
	cout << '-';
}
