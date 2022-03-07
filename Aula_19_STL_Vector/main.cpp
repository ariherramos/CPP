// Conjunto de componentes para tratar �problemas� comuns de programa��o
// Vector - tamanho � modificado dinamicamente

#include <iostream>
#include <vector>

int main ()
{
  std::vector<int> myints;
  std::vector<int>::iterator it;

  std::cout << "0. size: " << myints.size() << '\n';

  for (int i=0; i<10; i++) myints.push_back(i);
  std::cout << "1. size: " << myints.size() << '\n';

  myints.insert (myints.end(),10,100);
  std::cout << "2. size: " << myints.size() << '\n';

  myints.pop_back();
  std::cout << "3. size: " << myints.size() << '\n';

  for (it = myints.begin() ; it != myints.end(); ++it)
    std::cout << ' ' << *it;

  return 0;
}