#pragma once
#include "COvni.h"
class CAlfa :
    public COvni
{
protected:

public:
    CAlfa();
    CAlfa(int x, int y);
    ~CAlfa();
    void  mover(int MAXW, int MAXH)override;
    void mostrar();
};

