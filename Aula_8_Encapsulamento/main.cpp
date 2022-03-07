#include <iostream>
#include <string>

// É a capacidade de ocultação de detalhes de implementação por parte de entidades de manipulação de dados
// Faz parte por exemplo da Herança

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
