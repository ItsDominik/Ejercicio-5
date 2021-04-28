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
	CAlfa* nuevo = new CAlfa();
	arr.push_back(nuevo);
}

void CArrRazas::moverTodos(int MAXW, int MAXH)
{
	for (int i = 0; i < arr.size(); i++)
	{
		arr.at(i)->mover(MAXW, MAXH);
	}
}

void CArrRazas::setDy(int i, int dy)
{
	arr.at(i)->setDy(dy);
}

//void CArrRazas::setX(int i, int x)
//{
//	arr.at(i)->setDx(1);
//}
