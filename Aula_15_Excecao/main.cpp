#include <iostream>
#include <exception>
using namespace std;

int main () {
  try
  {
    int* myarray= new int[1000000000000000000000];
  }

  catch (exception& e)
  {
    cout << "Standard exception: " << e.what() << endl;
  }
  cout<<"banana";
  return 0;
}
