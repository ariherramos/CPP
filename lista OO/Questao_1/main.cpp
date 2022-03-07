#include <iostream>
#include "Contador.h"

using namespace std;

int main()
{
    Contador valor;
    valor.IncrementaContador();
    valor.ZeraContador();
    valor.PrintContador();
    valor.IncrementaContador();
    valor.IncrementaContador();
    valor.IncrementaContador();
    valor.PrintContador();
    return 0;
}
