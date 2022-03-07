#include <iostream>
#include "Ponto.h"
#include"Reta.h"
#include <iostream>
#include <string>

using namespace std;


int main()
{
    Ponto P1(1,8);
    Ponto P2(4,2);
    Ponto P3;
    Reta R1(P1, P2);
    R1.perteceReta(P1);
    R1.perteceReta(P3);
    cout<<R1.stringReta()<<endl;

    Reta R2(1,0);
    Reta R3(-1,2);
    P3=R2.intersecaoRetas(R3);
    cout<<"("<<P3.getX()<<","<<P3.getY()<<")"<<endl;

  float val =3.456;
  int x=10;
  string test;
  stringstream ss (stringstream::in | stringstream::out);

  ss << val;
    test.append(ss.str());
    test.append("banana");
    ss << x;
    test.append(ss.str());
    cout << test <<endl;
    return 0;
}
