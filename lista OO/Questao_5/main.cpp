#include <iostream>
#include "Circulo.h"

using namespace std;

int main()
{
    Circulo C1;
    Circulo C2(1,1,1);
    Circulo C3(2.2);

    cout <<  C3.getRaio() << endl;
    C1.setRaio(1);
    C1.alteraRaio(2);
    C1.moverCirculo(C3);
    cout <<  C1.areaCirculo() << endl;
    return 0;
}
