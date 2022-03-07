#include <iostream>

using namespace std;

class box
{
private:
    int x, y;
public:
    box(int z = 1, int w = 2): x(z), y(w)
    {
    }
    int area()
    {
        return x*y;
    }
    bool compara(box box1)
    {
        return this->area()>box1.area();
    }
};

int main()
{
    box box1(2,2);
    box box2;

    cout << box1.compara(box2) << endl; // TRUE
    cout << box2.compara(box1) << endl; // FALSE

    return 0;
}
