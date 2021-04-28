#include "CArrRazas.h"

CArrRazas::CArrRazas()
{

}

CArrRazas::~CArrRazas()
{
	arr.clear();
}

void CArrRazas::insertar(int MAXW, int MAXH, char letra)
{
	if (letra == 'A') 
	{
		CAlfa* nuevo = new CAlfa(1, 0);
		arr.push_back(nuevo); 
	}
	if (letra == 'B') 
	{ 
		CBeta* nuevo = new CBeta(MAXW/2, 0)
			; arr.push_back(nuevo); 
	}
	if (letra == 'G') 
	{ 
		CGamma* nuevo = new CGamma(MAXH-1-nuevo->getL(), 0);
		arr.push_back(nuevo); 
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

//void CArrRazas::setX(int i, int x)
//{
//	arr.at(i)->setDx(1);
//}
