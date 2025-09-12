// Laboratorio 11
// Obtener un numero que reciba un entero y encontrar la cantidad de digitos que tiene dicho entero

#include <iostream>

using namespace std;

int digitos(long long numero) {
    int cantidad = 1;

    while (numero/10 > 0) {
        ++cantidad;
        numero = numero/10;
    }
    return cantidad;
}

int main() {
    long long numero = 2341231230;
    int cantidad = digitos(numero);
    cout << cantidad;

    return 0;
}
