#include "CInvasion.h"

CInvasion::CInvasion()
{
}

CInvasion::~CInvasion()
{
}

void CInvasion::invadir(int MAXW, int MAXH)
{
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

	}
}
