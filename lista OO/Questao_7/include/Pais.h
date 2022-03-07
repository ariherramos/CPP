#ifndef PAIS_H
#define PAIS_H
#include <iostream>
#include <string>

using namespace std;

class Pais
{
    private:
        string _nome;
        double _populacao;
        double _dimensao;

    public:
        Pais(string nome, double populacao, double dimensao)
        {
            _nome=nome;
            _populacao=populacao;
            _dimensao=dimensao;
        }
        string getNome(){return _nome;}
        double getPopulacao(){return _populacao;}
        double getDimensao(){return _dimensao;}
        virtual ~Pais();


};

#endif // PAIS_H
