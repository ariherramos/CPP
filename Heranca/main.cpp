#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Conta
{
protected:
    int _id;
    string _nome;
    float _saldo;
public:
    Conta()
    {
    }
    void deposito(float valor)
    {
        _saldo = valor;
    }
    virtual void extratoBancario()
    {
    }

};

class ContaCorrente : public Conta
{
private:

public:
    ContaCorrente(int id, string nome, float saldo = 0)
    {
        _id = id;
        _nome = nome;
        _saldo = saldo;
    }
    void extratoBancario()
    {
        cout << "extrato conta corrente:" << endl;
        cout << "Usuario:" << _nome <<endl;
        cout << "Conta:  " << _id <<endl;
        cout << "Saldo:  " << _saldo<<endl;
    }

};

class ContaPoupanca : public Conta
{
private:

public:
    ContaPoupanca(int id, string nome, float saldo = 0)
    {
        _id = id;
        _nome = nome;
        _saldo = saldo;
    }
    void extratoBancario()
    {
        cout << "Extrato conta poupança: \n" << endl;
        cout << "Usuario:" << _nome <<endl;
        cout << "Conta:  " << _id <<endl;
        cout << "Saldo:  " << _saldo<<endl;
    }
};

int main()
{
    vector<Conta*>_listaContas;
    _listaContas.push_back(new ContaCorrente(123, "fernando"));
    _listaContas.push_back(new ContaCorrente(234, "robertinho", 10000));

    _listaContas[0]->extratoBancario();
    _listaContas[1]->extratoBancario();
    return 0;
}
