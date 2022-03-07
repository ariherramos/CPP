#include <iostream>
#include <string>

using namespace std;

class Pessoa
{
private:
    string _id;
    Pessoa *_mae;
    Pessoa *_pai;
public:
    Pessoa(string id, Pessoa *mae = NULL, Pessoa *pai = NULL): _id(id), _mae(mae), _pai(pai)
    {

    }

    string nomePessoa()
    {
        return _id;
    }

    string nomePai()
    {
        if (_pai == NULL)
        {
            return "Sem registro de pai";
        }
        return _pai->_id;
    }

    string nomeMae()
    {
        if (_mae == NULL)
        {
            return "Sem registro de mae";
        }
        return _mae->_id;
    }

    bool antecessora(Pessoa obj)
    {
        if(this->nomePai()== obj._id || this->nomeMae()== obj._id )
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Pessoa P1("joao");
    Pessoa P3("Ivonete");
    Pessoa P2("maria", &P3, &P1);

    cout <<P1.nomePai()<< endl;
    cout <<P1.nomeMae()<< endl;
    cout <<P2.antecessora(P1)<< endl;
    cout <<P3.antecessora(P1)<< endl;

    return 0;
}
