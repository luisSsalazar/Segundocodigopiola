#include <iostream>

using namespace std;

int main() {
    // Definir las variables
    int d1,d2,d3,d4,d5,c,v,s,q,l;

    // Solicitar la cantidad de d�lares al usuario
    cout << "Ingrese la cantidad de d�lares: ";
    cin >> d1;

    // Calcular la cantidad de billetes para cada denominaci�n
    c = d1 / 100;
    d2 = d1 -(c*100);

    v = d2 / 20;
    d3 = d2-(v*20);

    s = d3 / 10;
    d4 = d3-(s*10);

    q = d4 / 5;
    d5 = d4-(q*5);

    l = d5;

    // Mostrar la cantidad de billetes para cada denominaci�n
    cout << "Billetes de 100 d�lares: " << c << endl;
    cout << "Billetes de 20 d�lares: " << v << endl;
    cout << "Billetes de 10 d�lares: " << s << endl;
    cout << "Billetes de 5 d�lares: " << q << endl;
    cout << "Billetes de 1 d�lar: " << l << endl;

    return 0;
}
