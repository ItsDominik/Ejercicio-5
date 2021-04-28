#include "COvni.h"

void COvni::Borrar()
{
	//ZZZZ
	//BRanco presenta
	for (int i = 0; i < l; i++)
	{
		for (int j = 0; j < a; j++)
		{
			Console::SetCursorPosition(x + i, y + j);
		}
	}
}
