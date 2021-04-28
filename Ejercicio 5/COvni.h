#pragma once
#include <iostream>
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
	void Crear_Llantas(int cantidad);
	void Borrar();
	void Mostrar();
	void Mover(int MAXW, int MAXH);
	virtual void Cambiar_x(int nuevo);
	void Cambiar_dx(int nuevo);
	virtual void Cambiar_y(int nuevo);
	void Detenerse();
	int Retornar_x();
	int Retornar_l();
	int Retornar_dx();
};

