#include "CArrRazas.h"

CArrRazas::CArrRazas()
{

}

CArrRazas::~CArrRazas()
{
	arr.clear();
}

void CArrRazas::insertar(int MAXW, int MAXH)
{
	int conta, contb, contc = 0;
	if (conta >= 0) 
	{
		CAlfa* nuevo = new CAlfa(1, 0);
		arr.push_back(nuevo); 
	}
	if (contb == 2) { CBeta* nuevo = new CBeta(); arr.push_back(nuevo); }
	if (contc == 4) { CGamma* nuevo = new CGamma(); arr.push_back(nuevo); }
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
