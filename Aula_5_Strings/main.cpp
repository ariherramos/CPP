#include <iostream>

#include <string>

// Lembre-se uma string sempre termina com \0
// Entrada de string
// Imprimir String
// Tamanho da String
// Apagar alguns dados da String

using namespace std;

int main()
{
    string a, b, c, d, e;

    e = "batatinha";
    d = "batatinha";

    b = "batata assada";
    c = b;

    getline(cin,a);
    cout << a << endl;
    cout << a.length() << endl;

    cout << b << endl;
    cout << b + c << endl;

    a.erase(3,2);
    cout << a <<endl;

    if(e == d) cout<< "TRUE"<< endl;


    return 0;
}
