#include <iostream>
#include "Matriz.h"

using namespace std;

int main()
{
    Matriz M (2,2);//0 a 2
    Matriz M1;
    Matriz M2;
    M.nula();
    M.setElemento(0,0,1);
    M.setElemento(1,1,1);
    M.setElemento(2,2,1);

    M1=M.transposta();
    cout << M1.getElemento(0,1) << endl;
    M2=M1.oposta();
    cout << M2.getElemento(1,1) << endl;

    if(M.identidade())
    {
        cout<<"indentidade"<<endl;
    }
    else
    {
        cout<<"nao identidade"<<endl;
    }

    if(M.diagonal())
    {
        cout<<"diagonal"<<endl;
    }
    else
    {
        cout<<"nao diagonal"<<endl;
    }

    M.setElemento(1,0,4);
    if(M.singular())
    {
        cout<<"singular"<<endl;
    }
    else
    {
        cout<<"nao singular"<<endl;
    }

    if(M.simetrica())
    {
        cout<<"simetrica"<<endl;
    }
    else
    {
        cout<<"nao simetrica"<<endl;
    }

    if(M.antiSimetrica())
    {
        cout<<"anti-simetrica"<<endl;
    }
    else
    {
        cout<<"nao anti-simetrica"<<endl;
    }
    return 0;
}
