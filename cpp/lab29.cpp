#include <iostream>

using namespace std;

int main() {
    int numero = 10;
    int *puntero = &numero;

    cout << "Número: " << numero << endl;
    cout << "Direccion de memoria de puntero actual: " << &*puntero << endl;
    &*puntero++;
    cout << "Direccion de memoria de puntero luego:  " << &*puntero << endl;

    return 0;
}
