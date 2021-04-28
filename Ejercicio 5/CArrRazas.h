#pragma once
#include "COvni.h"
#include "CAlfa.h"
#include "CBeta.h"
#include "CGamma.h"
#include <vector>

class CArrRazas :
    public COvni
{
protected:
    vector<COvni*> arr;
public:
    CArrRazas();
    ~CArrRazas();
	void insertar(int MAXW, int MAXH, int cont);
	void moverTodos(int MAXW, int MAXH);
	void eliminar(int pos);
	void setDy(int i, int dy);
	int getY(int i);
	int getA(int i);
};

