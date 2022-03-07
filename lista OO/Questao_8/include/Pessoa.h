#ifndef PESSOA_H
#define PESSOA_H
#include <iostream>
#include <string>

using namespace std;

class Pessoa
{
    private:
        string _nome;
        Pessoa *_mae;
        Pessoa *_pai;
    public:
        Pessoa(string nome)
        {
            _nome=nome;
            _mae=NULL;
            _pai=NULL;
        }
        Pessoa(string nome, Pessoa &mae, Pessoa &pai)
        {
            _nome=nome;
            _mae=&mae;
            _pai=&pai;
        }
        string getNome(){return _nome;}
        Pessoa* getMae() {return _mae;}
        Pessoa* getPai() {return _pai;}

        bool pessoasIguais(Pessoa P)
        {
            if((_nome==P._nome)&&(_mae->getNome()==P._mae->getNome()))
            {
                return true;
            }
            return false;
        }

        bool pessoaIrmao(Pessoa P)
        {
            if((_pai->getNome()==P._pai->getNome())||(_mae->getNome()==P._mae->getNome()))
            {
                return true;
            }
            return false;
        }
        string pessoaAntecessora(Pessoa p)
        {
            Pessoa *vo1, *vo2, *vo3, *vo4;
            vo1=_mae->getMae();
            vo2=_mae->getPai();
            vo3=_pai->getMae();
            vo4=_pai->getPai();

            if(p._nome==_nome)
            {
                return "mesma pessoa";
            }
            else if(p._nome==_mae->getNome())
            {
                return "mae";
            }
            else if(p._nome==_pai->getNome())
            {
                return "pai";
            }
            else if(p._nome==vo1->getNome())
            {
                return "mae da mae";
            }
            else if(p._nome==vo2->getNome())
            {
                return "pai da mae";
            }
            else if(p._nome==vo3->getNome())
            {
                return "mae do pai";
            }
            else if(p._nome==vo4->getNome())
            {
                return "pai do pai";
            }
            else
            {
                return"nao eh nada";
            }

        }

        virtual ~Pessoa();
};

#endif // PESSOA_H
