#ifndef CONJUNTO_H
#define CONJUNTO_H
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <string.h>

using namespace std;

class Conjunto
{
    private:
        vector<string>_conjunto;
    public:
        Conjunto()
        {

        }
        Conjunto(string a)
        {
            _conjunto.push_back (a);
        }
        void adiciona(string a)
        {
            int rep=0;
            int x=_conjunto.size();
            for(int i=0; i<x; i++)
            {
                if(_conjunto[i]==a)
                {
                    rep=1;
                }
            }
            if(rep==0)
            {
                _conjunto.push_back(a);
            }
        }

        bool pertence(string a)
        {
            int rep=0;
            int x=_conjunto.size();
            for(int i=0; i<x; i++)
            {
                if(_conjunto[i]==a)
                {
                    rep=1;
                }
            }
            if(rep==0)
            {
                return false;
            }
             return true;
        }

        Conjunto uniao(Conjunto c)
        {
            Conjunto A;
            string B;
            int i=_conjunto.size();
            int j=c._conjunto.size();
            int k=0;
            cout<<_conjunto[k]+c._conjunto[k]<<endl;

            if(i<j)
            {
                for(k=0;k<i;k++)
                {

                    A._conjunto.push_back(_conjunto[k]+c._conjunto[k]);
                }
                for(k;k<j;k++)
                {
                    A._conjunto.push_back(c._conjunto[k]);
                }
            }
            else
            {
                for(k=0;k<j;k++)
                {
                    A._conjunto.push_back(_conjunto[k]+c._conjunto[k]);
                }
                for(k;k<i;k++)
                {
                    A._conjunto.push_back(_conjunto[k]);
                }
            }
            cout<<A._conjunto[0]<<endl;
            cout<<A._conjunto[1]<<endl;
            return A;
        }

        Conjunto inter(Conjunto c)
        {
            Conjunto A;
            string B;
            int i=_conjunto.size();
            int j=c._conjunto.size();
            int k=0;

            for(k=0;k<i;k++)
            {
                A._conjunto.push_back(_conjunto[k]);
            }
            for(k=0;k<j;k++)
            {
                A._conjunto.push_back(c._conjunto[k]);
            }
            cout<<A._conjunto[0]<<endl;
            cout<<A._conjunto[1]<<endl;
            cout<<A._conjunto[2]<<endl;
            return A;
        }

        Conjunto menos()
        {
            Conjunto A;
            string B;
            int i=_conjunto.size();
            int k=0;

            for(k=0;k<i;k++)
            {
                A._conjunto.push_back(_conjunto[k]);
            }
            return A;
        }

        virtual ~Conjunto();


};

#endif // CONJUNTO_H
