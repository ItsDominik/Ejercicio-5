#include "COvni.h"

void COvni::Borrar()
{
	for (int i = 0; i < l; i++)
	{
		for (int j = 0; j < a; j++)
		{
			Console::SetCursorPosition(x + i, y + j);
		}
	}
}
