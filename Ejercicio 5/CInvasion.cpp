#include "CInvasion.h"

CInvasion::CInvasion()
{
	invadido = false;
	numNaves = 0;
}

CInvasion::~CInvasion()
{
}

void CInvasion::invadir(int MAXW, int MAXH)
{
	int cont = 0;
	while (!invadido && getNumNaves()<20)
	{
		obj->moverTodos(MAXW, MAXH);
		_sleep(30);
		if (kbhit())
		{
			char t = getch();
			if (toupper(t)=='A')
			{
				obj->insertar(MAXW, MAXH, cont);
				cont++;
				if (cont == 4) cont = 0;
				numNaves++;
			}
		}
		for (int i = 0; i < numNaves; i++)
		{
			if (obj->getY(i) + obj->getA(i) == MAXH)
			{
				obj->eliminar(i);
			}
		}
	}
}

int CInvasion::getNumNaves()
{
	return numNaves;
}
