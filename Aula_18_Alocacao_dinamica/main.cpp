 #include <iostream>
 using namespace std;
 char * setName();
 int main (void)
 {
  char* str= setName();
  cout << str;
  delete str;            //fa�o o delete depois que o conte�do do ponteiro n�o � mais necess�rio.
  return 0;
 }
 char* setName (void)
 {
  char* name = new char[80];     //crio ponteiro chamado de name e dou o valor do endere�o da memoria din�mica
  cout << "Enter your name: ";
  cin.getline (name, 80);
  return name;
 }
