#include <iostream>

using namespace std;

class data
{
 int n;
 char str[256];
  public:
  class idata
     { int x;
       int y;
       int z;
       public:
            void printar()
            {
                cout << "batatinha" << endl;
            }
     };

     int getn()
     {
        return n;
     }
     void setn(int inn)
     {
         n = inn;
     }
};
int main()
{
    data a;

    data::idata b;

    a.setn(2);

    cout << a.getn() << endl;

    b.printar();

    return 0;
}
