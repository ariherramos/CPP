#include <iostream>
#include <string>

// � a capacidade de oculta��o de detalhes de implementa��o por parte de entidades de manipula��o de dados
// Faz parte por exemplo da Heran�a

using namespace std;

class veiculos
{
    public:
        string cor;
        void setPlaca(string a)
        {
            placa = a;
        }
    protected:
        string placa;

};

class carro: public veiculos
{
    public:
        int kilometravem;
        string getPlaca(void)
        {
            return this->placa;
        }

};

int main()
{
    carro banana;
    banana.setPlaca("123ban");
    cout << banana.getPlaca()<< endl;
    return 0;
}
