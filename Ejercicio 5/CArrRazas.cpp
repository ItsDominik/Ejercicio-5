#include "CArrRazas.h"

CArrRazas::CArrRazas()
{

}

CArrRazas::~CArrRazas()
{
}

void CArrRazas::insertar(int MAXW, int MAXH, int cont)
{
	if (cont >=0) 
	{
		CAlfa* nuevoa = new CAlfa(1, 0);
		arr.push_back(nuevoa); 
	}
	if (cont == 1 || cont == 3) 
	{ 
		CBeta* nuevob = new CBeta(MAXW/2, 0); 
		arr.push_back(nuevob); 
	}
	if (cont == 3) 
	{ 
		CGamma* nuevog = new CGamma(MAXH-1-nuevog->getL(), 0);
		arr.push_back(nuevog); 
	}
}

void CArrRazas::moverTodos(int MAXW, int MAXH)
{
	for (int i = 0; i < arr.size(); i++)
	{
		arr.at(i)->mover(MAXW, MAXH);
	}
}

void CArrRazas::eliminar(int pos)
{
	arr.erase(arr.begin() + pos);
}

void CArrRazas::setDy(int i, int dy)
{
	arr.at(i)->setDy(dy);
}

int CArrRazas::getY(int i)
{
	return arr.at(i)->getY();
}

int CArrRazas::getA(int i)
{
	return arr.at(i)->getA();
}

