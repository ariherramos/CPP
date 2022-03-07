#ifndef PONTO2D_H
#define PONTO2D_H

#include <iostream>
#include <math.h>


using namespace std;

class Ponto2D
{
    private:
        double _x;
        double _y;

    public:
        Ponto2D()
        {
            _x=0;
            _y=0;
        }

        Ponto2D(double x, double y)
        {
            _x=x;
            _y=y;
        }

        Ponto2D(const Ponto2D& p)
        {
            this->_x=p._x;
            this->_y=p._y;
        }

        Ponto2D getPonto()
        {
            Ponto2D p;
            p._x=_x;
            p._y=_y;
            return p;
        }

        void setPonto(double x, double y)
        {
            _x=x;
            _y=y;
        }

        bool operator =(Ponto2D&b)
        {
            if((this->_x==b._x)&(this->_y==b._y))
            {
                return true;
            }
            return false;
        }

        friend ostream& operator<< (ostream& os, Ponto2D& p)
        {
            os<<"x == "<<p._x<<"y == "<< p._y;
            return os;
        }
        double distancia(Ponto2D a, Ponto2D b)
        {
            double x;
            x=pow(a._x-b._x,2)+pow(a._y-b._y,2);
            x=sqrt(x);
            return x;
        }
        virtual ~Ponto2D();
};

#endif // PONTO2D_H
