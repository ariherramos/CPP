#ifndef PAIS_H
#define PAIS_H
#include <iostream>
#include <string>
#include <list>

using namespace std;

class Pais
{
    private:
        double _iso;
        string _nome;
        float _dimensao;
        float _populacao;
        list<string> _fronteira;

    public:
        Pais(double iso, string nome, double dimensao, double populacao)
        {
            _iso=iso;
            _nome=nome;
            _dimensao=dimensao;
            _populacao=populacao;
        }

        void setIso(double iso){_iso=iso;}
        void setNome(string nome){_nome=nome;}
        void setDimensao(double dimensao){_dimensao=dimensao;}
        void setPopulacao(double populacao){_populacao=populacao;}
        void setVizinho(string nome){_fronteira.push_back(nome);}

        double getIso(){return _iso;}
        string getNome(){return _nome;}
        float getDimensao(){return _dimensao;}
        float getPopulacao(){return _populacao;}

        bool codIso(Pais p)
        {
            if(_iso==p._iso){return true;}
            return false;
        }

        float densidadePopulacional()
        {
            float densidade;
            densidade=_populacao/_dimensao;
            return densidade;
        }

        void fronteiraPais()
        {
            cout<<"fronteiras de "<<_nome;
            for (list<string>::iterator it=_fronteira.begin() ; it != _fronteira.end(); ++it)
                cout << ' ' << *it;
            cout<<endl;
        }

        void fronteiraPaises( Pais p)
        {
            cout<<"fronteira entre "<<_nome<<" e "<<p._nome<<" :";
            for (list<string>::iterator it=_fronteira.begin() ; it != _fronteira.end(); ++it)
            {
                for (list<string>::iterator _it=p._fronteira.begin() ; _it != p._fronteira.end(); ++_it)
                {
                    if(*it==*_it)
                    {
                        cout << ' ' << *it;
                    }
                }
            }
            cout<<endl;

        }
        virtual ~Pais();

};

#endif // PAIS_H
