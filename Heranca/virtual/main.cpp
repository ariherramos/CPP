#include <iostream>

using std::cout;
using std::endl;

class Base {
public:
    // declara��o da fun��o virtual
    virtual void Quem_VIRTUAL()
    {
        cout << "Base\n";
    }
    // fun��o comum
    void Quem_NAO_VIRTUAL()
    {
        cout << "Base\n";
    }
};

class Derivada : public Base {
public:
    // fun��o virtual sobrescrita
    virtual void Quem_VIRTUAL()
    {
        cout << "Derivada\n";
    }
    // fun��o comum sobrescrita
    void Quem_NAO_VIRTUAL()
    {
        cout << "Derivada\n";
    }
};

int main ()
{
    Base *ptr_base;
    Derivada derivada;

    ptr_base = &derivada;           // convers�o impl�cita permiss�vel
    ptr_base->Quem_VIRTUAL();       // chamada polim�rfica (mostra: "Derivada")
    ptr_base->Quem_NAO_VIRTUAL();   // chamada comum, n�o-polim�rfica (mostra: "Base")

    cout << endl;

    return 0;
}
