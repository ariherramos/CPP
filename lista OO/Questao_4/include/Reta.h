#ifndef RETA_H
#define RETA_H

#include <iostream>
#include <complex>
#include <math.h>
#include <string>
#include "Ponto.h"
using namespace std;
#include <string>

class Reta
{
    private:
        double _a;
        double _b;
    public:
        Reta()
        {
            _a=0;
            _b=0;
        }
        Reta(double a, double b)
        {
            _a=a;
            _b=b;
        }

        Reta(Ponto a, Ponto b)
        {
            _a=(a.getY()-b.getY())/(a.getX()-b.getX());
            _b=a.getY()-(a.getX()*_a);
        }

        getAngular()
        {
            return _a;
        }

        getLinear()
        {
            return _b;
        }

        void perteceReta(Ponto a)
        {
            double y;
            if((y=_a*a.getX()+_b)==a.getY())
            {
                cout<<"Pertence"<<endl;
            }else
            {
                cout<<"Nao pertence"<<endl;
            }
        }

        string stringReta()
        {
            string uniao,a,b;
            ostringstream oss,osa;

            oss << _a;
            a=oss.str();

            osa << _b;
            b=osa.str();

            uniao.append("y=");
            uniao.append(a);
            uniao.append("x+");
            uniao.append(b);

            return uniao;
        }
        Ponto intersecaoRetas(Reta r)
        {
            Ponto p;
            double x,y;
            if(_a==r._a)
            {
                cout<<"retas paralelas"<<endl;
                return p;
            }
            x=(r._b-_b)/(_a-r._a);
            p.setX(x);
            y=x*_a+_b;
            p.setY(y);
            return p;
        }
        virtual ~Reta();

};

#endif // RETA_H
