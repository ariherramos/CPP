#include <iostream>
#include <vector>

using namespace std;

class Box
{
    private:
        int _x;
    public:
        Box(void)
        {
            _x = 10;
        }
        int getX()
        {
            return _x;
        }
        void setX(int x)
        {
            _x = x;
        }
};


int main()
{
    vector<Box*> _listaBox;
    _listaBox.push_back(new Box);

    cout << _listaBox[0]->getX()<< endl;
    return 0;
}
