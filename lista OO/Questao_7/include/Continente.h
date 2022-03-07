#ifndef CONTINENTE_H
#define CONTINENTE_H
#include <iostream>
#include <string>
#include <list>
#include <vector>
#include "Pais.h"

using namespace std;

class Continente
{
    private:
        vector<Pais*>_listaPaises;
    public:
        Continente()
        {
            _listaPaises.push_back(new Pais("brasil",1111,1111));
            _listaPaises.push_back(new Pais("argentina",2222,2222));
            _listaPaises.push_back(new Pais("uruguai",3333,3333));

        }

        double dimensaoContinente()
        {
            int i=0;
            double dimensao=0;

            for(i;i<_listaPaises.size();i++)
            {
                dimensao=_listaPaises[i]->getDimensao()+dimensao;
            }
            return dimensao;
        }
        double populacaoContinente()
        {
            unsigned int i=0;
            double populacao=0;

            for(i;i<_listaPaises.size();i++)
            {
                populacao=_listaPaises[i]->getPopulacao()+populacao;
            }
            return populacao;
        }
        double densidadeContinente()
        {
            unsigned int i;
            double populacao,dimensao,densidade;

            for(i=0;i<_listaPaises.size();i++)
            {
                populacao=_listaPaises[i]->getPopulacao()+populacao;
            }
            for(i=0;i<_listaPaises.size();i++)
            {
                dimensao=_listaPaises[i]->getDimensao()+dimensao;
            }
            densidade=populacao/dimensao;

            return densidade;
        }
        string menorPupulacaoPais()
        {
            int menor=0;
            int i;
            for(i=1;i<_listaPaises.size();i++)
            {
                if(_listaPaises[i]->getPopulacao()<_listaPaises[menor]->getPopulacao())
                {
                    menor=i;
                }
            }
            return _listaPaises[menor]->getNome();
        }
        string maiorPopulacaoPais()
        {
            int maior=0;
            int i;
            for(i=1;i<_listaPaises.size();i++)
            {
                if(_listaPaises[i]->getPopulacao()>_listaPaises[maior]->getPopulacao())
                {
                    maior=i;
                }
            }
            return _listaPaises[maior]->getNome();
        }

        string menorTerritorioPais()
        {
            int menor=0;
            int i;
            for(i=1;i<_listaPaises.size();i++)
            {
                if(_listaPaises[i]->getDimensao()<_listaPaises[menor]->getDimensao())
                {
                    menor=i;
                }
            }
            return _listaPaises[menor]->getNome();

        }
        string maiorTerritorioPais()
        {
            int maior=0;
            int i;
            for(i=1;i<_listaPaises.size();i++)
            {
                if(_listaPaises[i]->getDimensao()>_listaPaises[maior]->getDimensao())
                {
                    maior=i;
                }
            }
            return _listaPaises[maior]->getNome();
        }
        double razaoterritorial()
        {
            int maior=0, menor=0;
            int i;
            for(i=1;i<_listaPaises.size();i++)
            {
                if(_listaPaises[i]->getDimensao()>_listaPaises[maior]->getDimensao())
                {
                    maior=i;
                }
            }
            for(i=1;i<_listaPaises.size();i++)
            {
                if(_listaPaises[i]->getDimensao()<_listaPaises[menor]->getDimensao())
                {
                    menor=i;
                }
            }
            return (_listaPaises[maior]->getDimensao()/_listaPaises[menor]->getDimensao());
        }
        virtual ~Continente();

    protected:


};

#endif // CONTINENTE_H
