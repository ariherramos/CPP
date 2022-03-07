#include "Contador.h"

Contador::Contador()
{
    _contagem=0;
}

Contador::IncrementaContador()
{
    _contagem++;
}
Contador::ZeraContador()
{
    _contagem=0;
}
Contador::PrintContador()
{
    cout << _contagem << endl;
}
Contador::~Contador()
{
    //dtor
}
