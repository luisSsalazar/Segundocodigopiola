#include <iostream>

using namespace std;

int main() {
    // Definir las variables
    int d1,d2,d3,d4,d5,c,v,s,q,l;

    // Solicitar la cantidad de dólares al usuario
    cout << "Ingrese la cantidad de dólares: ";
    cin >> d1;

    // Calcular la cantidad de billetes para cada denominación
    c = d1 / 100;
    d2 = d1 -(c*100);

    v = d2 / 20;
    d3 = d2-(v*20);

    s = d3 / 10;
    d4 = d3-(s*10);

    q = d4 / 5;
    d5 = d4-(q*5);

    l = d5;

    // Mostrar la cantidad de billetes para cada denominación
    cout << "Billetes de 100 dólares: " << c << endl;
    cout << "Billetes de 20 dólares: " << v << endl;
    cout << "Billetes de 10 dólares: " << s << endl;
    cout << "Billetes de 5 dólares: " << q << endl;
    cout << "Billetes de 1 dólar: " << l << endl;

    return 0;
}
