#include <iostream>

// namespace evita colisões do código, pricipalmente quando se há muitas bibliotecas
using namespace std;

namespace first
{
  int x = 5;
  int y = 10;
}

namespace second
{
  double x = 3.1416;
  double y = 2.7183;
}
// Para classes

namespace ContosoData1
{
    class ObjectManager
    {
    public:
        void DoSomething()
        {
            cout <<"ok1"<< endl;
        }
    };
}

namespace ContosoData2
{
    class ObjectManager
    {
    public:
        void DoSomething()
        {
            cout <<"ok2"<< endl;
        }
    };
}

int main()
{
   int valor;
   cout << "digite algum valor:" << endl;
   cin >> valor;
   cout << "Aqui esta o valor digitado:" << valor << endl;

   cout << endl;

  {
      using namespace first;        // Uso da diretiva
      cout << x << endl;
      cout << y << endl;
      cout << second::x << endl;    // Nome totalmente qualificado
      cout << second::y << endl;
  }
  {
      using namespace second;
      cout << x << endl;
      cout << y << endl;
  }

    ContosoData2::ObjectManager objeto;
    objeto.DoSomething();

    /*
    using ContosoData1::ObjectManager;
    ObjectManager objeto1;
    objeto1.DoSomething();
    */

    using namespace ContosoData2;
    ObjectManager obj;
    obj.DoSomething();

    return 0;
}
