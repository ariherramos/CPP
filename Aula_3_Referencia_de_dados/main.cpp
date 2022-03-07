#include <iostream>

// tanto a como b apontam para o mesmo endereço!

using namespace std;

int main()
{
    int  a = 10;
    int &b = a;

    b = 20;

    cout << a << endl;
    return 0;
}
