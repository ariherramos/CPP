#include <iostream>

// Repare que temos o operador ":" ( dois pontos ) como elo entre as duas classes. Este operador promove o "parentesco" entre as duas classes quando � usado na declara��o de uma classe derivada.

using namespace std;
 class veiculo_rodoviario // Define uma classe base ve�culos.
    {
        int rodas;
        int passageiros;
    public:
        void set_rodas(int num) { rodas = num; }
        int get_rodas() { return rodas; }
        void set_pass(int num) { passageiros = num; }
        int get_pass() { return passageiros; }
    };
 class caminhao : public veiculo_rodoviario // Define um caminhao.
    {
          int carga;
    public:
           void set_carga(int size) { carga = size; }
           int get_carga() { return carga; }
           void mostrar();
    };
 enum tipo {car, van, vagao};
 class automovel : public veiculo_rodoviario // Define um automovel.
    {
        enum tipo car_tipo;
    public:
        void set_tipo(tipo t) { car_tipo = t; }
        enum tipo get_tipo() { return car_tipo; }
        void mostrar();
    };
 void caminhao::mostrar()
        {
        cout << "rodas: " << get_rodas() << "\n";
        cout << "passageiros: " << get_pass() << "\n";
        cout << "carga (capacidade em litros): " << carga << "\n";
        }
 void automovel::mostrar()
        {
        cout << "rodas: " << get_rodas() << "\n";
        cout << "passageiros: " << get_pass() << "\n";
        cout << "tipo: ";
        switch(get_tipo())
                {
                case van: cout << "van\n";
                          break;
                case car: cout << "carro\n";
                          break;
                case vagao: cout << "vagao\n";
                }
        }
 int main()
 {
    caminhao t1, t2;
    automovel c;
    t1.set_rodas(18);
    t1.set_pass(2);
    t1.set_carga(3200);
    t2.set_rodas(6);
    t2.set_pass(3);
    t2.set_carga(1200);
    t1.mostrar();
    cout << "\n";
    t2.mostrar();
    cout << "\n";
    c.set_rodas(4);
    c.set_pass(6);
    c.set_tipo(van);
    c.mostrar();

#ifndef WIN32
    system ("pause");
#endif
    return 0;
 }
