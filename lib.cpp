
#include "lib.h"

bool trovaprimo (int dato, int passo)
{
    bool flag=false;

    if (passo == 1 || passo == 0)
    {
        return true;
    }

    if ((dato % passo) != 0)
    {
        passo--;

        flag = trovaprimo(dato, passo);

        return flag;
    }
}

