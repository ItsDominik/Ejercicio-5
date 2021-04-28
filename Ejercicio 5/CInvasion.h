#pragma once
#include "CArrRazas.h"
class CInvasion :
    public CArrRazas
{
protected:
    bool invadido;
    int numNaves;
    CArrRazas* obj;
public:
    CInvasion();
    ~CInvasion();
    void invadir(int MAXW, int MAXH);
};

