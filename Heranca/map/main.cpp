#include <string.h>
#include <iostream>
#include <map>
#include <utility>
using namespace std;
int main()
{
    map<int, string> Estudante;
    map<int,string>::iterator ii;
    Estudante[123]="joao";
    Estudante[234]="joao";
    Estudante[345]="joao";
    cout<<Estudante[123]<<endl;
    cout<<Estudante.size()<<endl;
    for(ii=Estudante.begin(); ii!=Estudante.end(); ++ii)
    {
        cout << (*ii).first << ": " << (*ii).second << endl;
    }

}
