#ifndef MATRIZ_H
#define MATRIZ_H
#include <iostream>

using namespace std;

class Matriz
{
    private:
        int **_matriz;
        int _x;
        int _y;
    public:
        Matriz ()
        {

        }
        Matriz(int x, int y)
        {
            _x=x;
            _y=y;
            _matriz=new int*[x];
            for (int i=0;i<=x;i++ )
            {
                _matriz[i]=new int[y];
            }
        }
        void setElemento(int x, int y, int v)
        {
           _matriz[x][y]=v;
        }
        int getElemento(int x, int y)
        {
            return _matriz[x][y];
        }
        void nula()
        {
            int i,k;
            for(i=0;i<=_x;i++)
            {
                for(k=0;k<=_y;k++)
                {
                    _matriz[i][k]=0;
                }
            }

        }
        //troca linha por coluna
        Matriz transposta()
        {
            int i,k;

            Matriz A(_y,_x);
            A._x=_y;
            A._y=_x;

            A._matriz=new int*[_y];
            for (int i=0;i<=_y;i++ )
            {
                A._matriz[i]=new int[_x];
            }

            for(i=0;i<=_x;i++)
            {
                for(k=0;k<=_y;k++)
                {
                    A._matriz[k][i]=_matriz[i][k];
                }
            }
            return A;
        }

        Matriz oposta()
        {
            int i,k;

            Matriz A(_x,_y);
            A._x=_x;
            A._y=_y;

            A._matriz=new int*[_x];
            for (int i=0;i<=_x;i++ )
            {
                A._matriz[i]=new int[_y];
            }

            for(i=0;i<=_x;i++)
            {
                for(k=0;k<=_y;k++)
                {
                    A._matriz[i][k]=-_matriz[i][k];
                }
            }
            return A;
        }

        bool identidade()
        {
            int i, k;
            int d=0;

            if(_x!=_y)
            {
                return false;
            }

            for(i=0;i<=_x;i++)
            {
                for(k=0;k<=_y;k++)
                {
                    if (i==k)
                    {
                        if(_matriz[i][k]!=1)
                        {
                            d=d+1;
                        }

                    }
                    else
                    {
                         if(_matriz[i][k]!=0)
                        {
                            d=d+1;
                        }
                    }
                }
            }
            if(d==0)
            {
                return true;
            }
            return false;
        }

        bool diagonal()
        {
            int i, k;
            int d=0;

            if(_x!=_y)
            {
                return false;
            }

            for(i=0;i<=_x;i++)
            {
                for(k=0;k<=_y;k++)
                {
                    if (i!=k)
                    {
                         if(_matriz[i][k]!=0)
                        {
                            d=d+1;
                        }
                    }
                }
            }
            if(d==0)
            {
                return true;
            }
            return false;
        }

        bool singular()
        {
            int i, k;
            int e=0;

            for(i=0;i<=_x;i++)
            {
                for(k=0;k<=_y;k++)
                {
                    if(k==i)
                    {
                        if(_matriz[0][0]!=_matriz[i][k])
                        {
                            e=e+1;
                        }
                    }
                }
            }
            if(e==0)
            {
                return true;
            }
            return false;

        }

        bool simetrica()
        {
            int i, k;
            int e=0;
            Matriz A;
            A=transposta();

            if(_x!=_y)
            {
                return false;
            }

            for(i=0;i<=_x;i++)
            {
                for(k=0;k<=_y;k++)
                {
                    if(A._matriz[i][k]!=_matriz[i][k])
                    {
                        e=e+1;
                    }
                }
            }

            if(e==0)
            {
                return true;
            }
            return false;
        }

        bool antiSimetrica()
        {
            Matriz A;
            Matriz B;
            A=oposta();
            B=transposta();
            int e=0, i, k;

            for(i=0;i<=_x;i++)
            {
                for(k=0;k<=_y;k++)
                {
                    if(A._matriz[i][k]!=B._matriz[i][k])
                    {
                        e=e+1;
                    }
                }
            }

            if(e==0)
            {
                return true;
            }
            return false;
        }

        void soma(Matriz A)
        {
            int i, k;

            for(i=0;i<=_x;i++)
            {
                for(k=0;k<=_y;k++)
                {
                    _matriz[i][k]=_matriz[i][k]+A._matriz[i][k];
                }
            }
        }

        void subtrair(Matriz A)
        {
            int i, k;

            for(i=0;i<=_x;i++)
            {
                for(k=0;k<=_y;k++)
                {
                    _matriz[i][k]=_matriz[i][k]-A._matriz[i][k];
                }
            }
        }
        void multiplicacao(Matriz A)
        {
            int i, k;

            for(i=0;i<=_x;i++)
            {
                for(k=0;k<=_y;k++)
                {
                    _matriz[i][k]=_matriz[i][k]*A._matriz[i][k];
                }
            }
        }
        void copia(Matriz A)
        {
            int i, k;

            for(i=0;i<=_x;i++)
            {
                for(k=0;k<=_y;k++)
                {
                    _matriz[i][k]=A._matriz[i][k];
                }
            }
        }
        virtual ~Matriz();
};

#endif // MATRIZ_H
