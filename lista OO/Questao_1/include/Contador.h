#ifndef CONTADOR_H
#define CONTADOR_H

#include <iostream>

using namespace std;

class Contador
{
    private:
        int _contagem;
    public:
        Contador();
        IncrementaContador();
        ZeraContador();
        PrintContador();
        virtual ~Contador();


};

#endif // CONTADOR_H
