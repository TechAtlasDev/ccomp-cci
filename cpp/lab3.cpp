// Laboratorio 3
// Sentencias condicionales

#include <iostream>

using namespace std;

int edad = 20;

int main() {
    if (edad > 18) {
        cout << "Eres mayor de edad";
    } else if (edad == 18) {
        cout << "Tienes una edad igual a 18";
    } else {
        cout << "Eres menor de edad";
    }

    cout << endl;

    return 0;
}
