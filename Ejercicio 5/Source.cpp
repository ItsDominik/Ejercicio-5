#include "CInvasion.h"
int main()
{
	CInvasion* obj_CInvasion = new CInvasion();
	const int MAXW = 150;
	const int MAXH = 40;
	Console::SetWindowSize(MAXW, MAXH);
	obj_CInvasion->invadir(MAXW, MAXH);
	system("pause");
	return 0;
}