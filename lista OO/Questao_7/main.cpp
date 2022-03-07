#include <iostream>
#include "Continente.h"

using namespace std;

int main()
{
    Continente C;
    cout<<"dimensao continente:"<<C.dimensaoContinente()<<endl;
    cout<<"populacao:"<<C.populacaoContinente()<<endl;
    cout<<"densidade:"<<C.densidadeContinente()<<endl;

    cout<<"maior populacao:"<<C.maiorPopulacaoPais()<<endl;
    cout<<"maior territorio:"<<C.maiorTerritorioPais()<<endl;
    cout<<"menor populacao:"<<C.menorPupulacaoPais()<<endl;
    cout<<"menor territorio:"<<C.menorTerritorioPais()<<endl;
    cout<<C.razaoterritorial()<<endl;
    return 0;
}
