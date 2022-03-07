 // Este program usa classes bases virtuais.
 #include <iostream>
 using namespace std;
 class base
        {
        public:
               int i;
        };
 class derived1 : virtual public base // derived1 inherits base as virtual.
        {
        public:
               int j;
        };
 class derived2 : virtual public base // derived2 inherits base as virtual.
        {
        public:
               int k;
        };
 class derived3 : public derived1, public derived2 /* derived3 inherits both derived1 and derived2. This time, there is only one copy of base class. */
        {
        public:
               int sum;
        };
 int main()
 {
    derived3 ob;
    ob.i = 10; // now unambiguous
    ob.j = 20;
    ob.k = 30;
    ob.sum = ob.i + ob.j + ob.k;// unambiguous
    cout << ob.i << " ";// unambiguous
    cout << ob.j << " " << ob.k << " ";
    cout << ob.sum;
    //system ("pause");
    return 0;
 }
