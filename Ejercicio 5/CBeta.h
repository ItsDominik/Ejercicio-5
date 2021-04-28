#pragma once
#include "COvni.h"
class CBeta :
    public COvni
{
protected:

public:
    CBeta(int x, int y);
    ~CBeta();
    void  mover(int MAXW, int MAXH)override;
    void mostrar();
};

