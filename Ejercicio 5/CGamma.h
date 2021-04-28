#pragma once
#include "COvni.h"
class CGamma :
    public COvni
{
protected:

public:
    CGamma(int x, int y);
    ~CGamma();
    void mover(int MAXW, int MAXH)override;
    void mostrar();
};

