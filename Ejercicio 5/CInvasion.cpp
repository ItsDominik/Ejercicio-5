#include "CInvasion.h"

CInvasion::CInvasion()
{
}

CInvasion::~CInvasion()
{
}

void CInvasion::invadir(int MAXW, int MAXH)
{
	int cont = 0;
	while (!invadido)
	{
		obj->moverTodos(MAXW, MAXH);
		_sleep(30);
		for (int i = 0; i < numNaves ; i++)
		{
			if (obj->getY(i)+obj->getA(i)==0)
			{
				obj->eliminar(i);
			}
		}
		if (kbhit())
		{
			char t = getch();
			if (toupper(t)=='A')
			{
				obj->insertar(MAXW, MAXH, cont);
				cont++;
				if (cont == 5) cont = 0;
			}
		}
	}
}
