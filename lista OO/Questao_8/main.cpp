#include <iostream>
#include "Pessoa.h"

using namespace std;

int main()
{
    Pessoa P1("a");
    Pessoa P2("b");
    Pessoa P3("c");
    Pessoa P4("d",P2,P1);
    Pessoa P5("e",P4,P3);

    if (P5.pessoasIguais(P4))
    {
        cout<<"mesma pessoa"<<endl;
    }else
    {
        cout<<"pessoas diferentes"<<endl;
    }

    if (P5.pessoaIrmao(P4))
    {
        cout<<" sao irmao"<<endl;
    }else
    {
        cout<<"nao sao irmao"<<endl;
    }
    cout<<P5.pessoaAntecessora(P1)<<endl;
    return 0;
}
