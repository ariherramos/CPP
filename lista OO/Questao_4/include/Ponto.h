#ifndef PONTO_H
#define PONTO_H

using namespace std;
#include <iostream>
#include <complex>
#include <math.h>
#include <string>

class Ponto
{
    private:
        double _x;
        double _y;
    public:
        Ponto()
        {
            _x=0;
            _y=0;
        }
        Ponto(double x, double y)
        {
            _x=x;
            _y=y;
        }
        getX()
        {
            return _x;
        }
        getY()
        {
            return _y;
        }
        void setX(double x)
        {
            _x=x;
        }
        void setY(double y)
        {
            _y=y;
        }
        virtual ~Ponto();

};

#endif // PONTO_H
