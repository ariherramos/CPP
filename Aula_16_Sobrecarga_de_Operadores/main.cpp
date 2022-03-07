#include <iostream>

using namespace std;

class ponto
{

public:

    int x, z, y;

    ponto(int a = 10, int b = 10)
    {
       x = a;
       y = b;
       z = 10;
    }
    ponto operator+(ponto p)
    {
        int a, b;
        a = x + p.x;
        b = y + p.y;

        return ponto(a, b);
    }

    int getX()
    {
        return x;
    }
};


int main()
{
    ponto p1(1,5), p2(3,4), soma;
    soma = p1 + p2;

    cout <<  soma.getX();
}
