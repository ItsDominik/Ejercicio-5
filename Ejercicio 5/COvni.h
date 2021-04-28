#pragma once
#include <iostream>
#include <conio.h>
using namespace std;
using namespace System;
class COvni
{
protected:
	int x, y, a, l;
	int dx, dy, color;

public:
	COvni();
	~COvni();
	void borrar();
	virtual void mostrar();
	virtual void mover(int MAXW, int MAXH);
	void setDx(int dx);
	void setDy(int dy);
	int getX();
	int getY();
	int getDx();
	int getDy();
	int getA();
	int getL();
	int getColor();
};

