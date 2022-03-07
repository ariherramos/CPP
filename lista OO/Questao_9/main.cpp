#include <iostream>
#include "Conjunto.h"

using namespace std;

int main()
{
    Conjunto C ("banana");
    C.adiciona("maca");
    Conjunto C1("abacaxi");
    Conjunto C2;
    Conjunto C3;
    Conjunto C4;

    if(C.pertence("uva"))
    {
        cout <<"repetido" << endl;
    }
    else
    {
        cout <<"nao contem" << endl;
    }
    C2=C1.uniao(C);

    C3=C1.inter(C);

    C4=C1.menos();
    return 0;
}
