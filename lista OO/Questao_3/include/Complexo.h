#ifndef COMPLEXO_H
#define COMPLEXO_H

using namespace std;
#include <iostream>
#include <complex>
#include <math.h>
#include <string>

class Complexo
{

    private:
        complex<double> number;

    public:
        Complexo()
        {
            number.real()=0;
            number.imag()=0;
        }
        Complexo(int num1, int num2)
        {
            number.real()=num1;
            number.imag()=num2;
        }
        void setComplexo(int num1, int num2)
        {
            number.real()=num1;
            number.imag()=num2;
        }
        double getReal()
        {
            return number.real();
        }
        double getImaginario()
        {
            return number.imag();
        }
        Complexo operator+(const Complexo& t)
        {
            Complexo s;
            s.number.real()=this->number.real()+t.number.real();
            s.number.imag()=this->number.imag()+t.number.imag();
            return s;
        }
        Complexo operator-(const Complexo& t)
        {
            Complexo s;
            s.number.real()=this->number.real()-t.number.real();
            s.number.imag()=this->number.imag()-t.number.imag();
            return s;
        }
        Complexo operator*(const Complexo& t)
        {
            Complexo s;
            s.number.real()=(this->number.real()*t.number.real())-(this->number.imag()*t.number.imag());
            s.number.imag()=(this->number.real()*t.number.imag())+(this->number.imag()*t.number.real());
            return s;
        }

        Complexo operator/(const Complexo& t)
        {
            Complexo s;
            s.number.real()=(((this->number.real()*t.number.real())+(this->number.imag()*t.number.imag()))/(t.number.real()*t.number.real()+t.number.imag()*t.number.imag()));
            s.number.imag()=((-(this->number.real()*t.number.imag())+(this->number.imag()*t.number.real()))/(t.number.real()*t.number.real()+t.number.imag()*t.number.imag()));
            return s;
        }
        void PrintComplexo()
        {
            cout << "Real part: " << number.real() ;
            cout << " Imaginary part: " << number.imag() << '\n';
        }

        bool operator ==(const Complexo& b)
        {
            if((this->number.real()==b.number.real())&(this->number.imag()==b.number.imag()))
            {
                return true;
            }
            return false;
        }

        double moduloComplexo()
        {
            double x;
            x=pow(number.real(),2)+pow(number.imag(),2);
            x=sqrt(x);
            return x;
        }

        string complexoNumero()
        {
            string real, imaginario, uniao;
            ostringstream oss,osa;

            oss << number.real();
            real=oss.str();

            osa << number.imag();
            imaginario=osa.str();

            uniao.append(real);
            uniao.append("+");
            uniao.append(imaginario);
            uniao.append("j");

            return uniao;
        }

        virtual ~Complexo(){};
};
#endif // COMPLEXO_H
