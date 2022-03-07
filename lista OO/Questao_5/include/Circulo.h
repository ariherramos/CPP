#ifndef CIRCULO_H
#define CIRCULO_H
#include <iostream>
#include <math.h>

using namespace std;


class Circulo
{
    private:
        double _x;
        double _y;
        double _raio;
    public:
        Circulo()
        {
            _x=0;
            _y=0;
            _raio=0;
        }
        Circulo(double x, double y, double r)
        {
            _x=x;
            _y=y;
            _raio=r;
        }
        Circulo(double r)
        {
            _x=0;
            _y=0;
            _raio=r;
        }
        double getRaio()
        {
            return _raio;
        }
        void setRaio(double r)
        {
            _raio=r;
        }
        void alteraRaio(double multiplicador)
        {
            _raio=_raio*multiplicador;
        }

        double areaCirculo()
        {
            double area;
            area=M_PI*pow(_raio,2);
            return area;
        }

        void moverCirculo()
        {
            _x=0;
            _y=0;
        }

        void moverCirculo(double x, double y)
        {
            _x=x;
            _y=y;
        }

        void moverCirculo(Circulo c)
        {
            _x=c._x;
            //cout <<  _x << endl;
            _y=c._y;
            //cout <<  _y << endl;
        }

        virtual ~Circulo();
};

#endif // CIRCULO_H
