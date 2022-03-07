 // Um exemplo de m�ltiplas classes base.
 #include <iostream>

 using namespace std;

 class base1
    {
    protected:
              int x;
    public:
           void showx() { cout << x << "\n"; }
    };

 class base2
    {
    protected:
              int y;
    public:
           void showy() { cout << y << "\n"; }
    };

 class derived: public base1, public base2 // Inherit multiple base classes.
    {
    public:
           void set(int i, int j) { x = i; y = j; }
    };

 int main()
 {
    derived ob;
    ob.set(10, 20); // Dispon�vel pela classe "derived"
    ob.showx(); // Pela classe base1
    ob.showy(); // Pela classe base2
#ifndef WIN32
    system ("pause");
#endif
    return 0;
 }
