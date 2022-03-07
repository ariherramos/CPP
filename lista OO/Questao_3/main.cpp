#include <iostream>
#include "Complexo.h"
using namespace std;

int main()
{
    Complexo Calculadora1(1,3);
    Complexo Calculadora2(1,-1);
    Complexo Calculadora3;

    Calculadora3=Calculadora1+Calculadora2;
    Calculadora3.PrintComplexo();
    Calculadora3=Calculadora1-Calculadora2;
    Calculadora3.PrintComplexo();
    Calculadora3=Calculadora1*Calculadora2;
    Calculadora3.PrintComplexo();
    Calculadora3=Calculadora1/Calculadora2;
    Calculadora3.PrintComplexo();

    if(Calculadora1==Calculadora2)
    {
       cout <<" iguais" << endl;
    }else
    {
       cout <<" diferentes" << endl;
    }
    if(Calculadora1==Calculadora1)
    {
       cout <<" iguais" << endl;
    }else
    {
       cout <<" diferentes" << endl;
    }
    cout <<Calculadora1.moduloComplexo() << endl;

    cout <<Calculadora3.complexoNumero() <<endl;
}
