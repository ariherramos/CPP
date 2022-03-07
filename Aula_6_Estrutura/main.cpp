#include <iostream>

// Declaração de estrutura
// Referencia a estrutura
// Ponteiro para estrutura
// Soma de duas estruturas

using namespace std;

struct box
{
    int a;
    int b;

    int soma(box boxA)
    {
        return this->a+boxA.a;
    }
};

int main()
{
    box box1;
    box box2;
    box box3;
    box *ptr;

    box1.a = 2;
    box2.a = 4;
    box3 = box1;
    ptr = &box2;

    cout << box3.a << endl;
    cout << ptr->a << endl;
    ptr = &box3;
    cout << ptr->a << endl;
    cout <<  box2.soma(box1) << endl;


    return 0;
}
