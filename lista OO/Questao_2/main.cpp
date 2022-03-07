#include <iostream>
#include "Ponto2D.h"

using namespace std;

int main()
{
    Ponto2D p;
    Ponto2D p1;
    Ponto2D p2(1,2);
    Ponto2D p3(10,10);
    Ponto2D p4(p3);

    cout << p1 << endl;
    cout << p2 << endl;
    cout << p3 << endl;
    cout << p4 << endl;
    p1.setPonto(1,2);
    cout << p1 << endl;

    if(p1=p2)
    {
       cout <<"pontos iguais" << endl;
    }else
    {
       cout <<"pontos diferentes" << endl;
    }

    if(p1=p3)
    {
       cout <<"pontos iguais" << endl;
    }else
    {
       cout <<"pontos diferentes" << endl;
    }
    cout <<p.distancia(p1,p3) << endl;
    return 0;
}
