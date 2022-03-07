#include <iostream>

// Operador *   -> Declaração do ponteiro e valor apontado do ponteiro que esta no endereço
// Operador &   -> Endereço do ponteiro
// Passar por referencia um vetor para modificar os seus valores

using namespace std;

void multiplicaPorQuatro(int *pont)
{
    *pont= *pont*4;
    pont++;
}

void multiplicaPorDois(int *pont1, int *pont2)
{
    *pont1 = 52;
    *pont2 = *pont2*2;
}


int main()
{
    int *ptr;
    int  a = 5;
    ptr = &a;

    int b[4] = {1, 2, 3, 4};
    ptr = &b[0];

    int c, d;

    d = 5;

    multiplicaPorDois( &c, &d);

    multiplicaPorQuatro(b);

    cout << *++ptr << endl;

    cout << b[0] << endl;
    cout << c << endl;
    cout << d << endl;

    return 0;
}
