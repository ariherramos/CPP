#include<iostream>
#include<vector>
#include<string>
#include<iterator>

using namespace std;

class Pais
{
private:
  int    _iso;
  int    _i;
  string _name;
  float  _population;
  float  _dimension;
  vector<Pais*>_listOfCountrys;

public:
  Pais(int iso = 123, string name = "batata", float population = 10, float dimension = 10): _iso(iso), _name(name), _population(population), _dimension(dimension)
  {
      _i = 0;
  }

  void setParameters(int iso, string name, float population, float dimension)
  {
    _iso = iso;
    _name = name;
    _population = population;
    _dimension = dimension;
  }

  string getName()
  {
    return _name;
  }

  void setCountryBoard(Pais& obj)
  {
    _listOfCountrys.push_back(new Pais);
    _listOfCountrys[_i]->setParameters(1,obj.getName(),2,3);
    cout<<"pais adicionado:"<<_listOfCountrys[_i]->getName()<<endl;
    _i++;
  }

  void getNamesCountrys()
  {
      vector<Pais*>::iterator i;
      cout<<"a lista de paises sao:";

      int j = 0;

      for(i=_listOfCountrys.begin(); i <= _listOfCountrys.end(); i++)
      {
            cout<<","<<_listOfCountrys[j]->getName();
            j++;
      }
  }

};


int main()
{
  Pais _brasil(1234, "Brazil", 123, 789);
  Pais _argentina(2345, "Argnetina", 1234, 8924);
  Pais _uruguai(2345, "Uruguai", 1234, 8924);

  _brasil.setCountryBoard(_argentina);
  _brasil.setCountryBoard(_uruguai);


  _brasil.getNamesCountrys();

  return 0;
}
