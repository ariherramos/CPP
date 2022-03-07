#include <iostream>
#include "Pais.h"

using namespace std;

int main()
{
    Pais P1(31661,"brasil",8515767049,193946886);
    Pais P2(4321,"argentina", 9876,567890);

    P1.setVizinho("venezuela");
    P1.setVizinho("colombia");
    P1.setVizinho("argentina");
    P1.setVizinho("bolivia");
    P1.setVizinho("uruguai");
    P1.setVizinho("paraguai");
    P1.setVizinho("guiana francesa");
    P1.setVizinho("guiana");
    P1.setVizinho("suriname");

    P2.setVizinho("chile");
    P2.setVizinho("uruguai");
    P2.setVizinho("brasil");
    P2.setVizinho("bolivia");
    P2.setVizinho("paraguai");

    if(P1.codIso(P2))
    {
        cout << "mesmo pais" << endl;
    }else
    {
        cout << "diferente pais" << endl;
    }

    P1.fronteiraPais();

    P1.fronteiraPaises(P2);

    cout << "Densidade populacional :"<<P1.densidadePopulacional() << endl;
    return 0;
}
