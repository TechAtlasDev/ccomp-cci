// Laboratorio 16
// Laboratorio que intercambia valores de dos valores usando parámetros por referencia

#include <iostream>

using namespace std;

void intercambiar(int &num1, int &num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
    return;
}

int main() {
    int numero1 = 10;
    int numero2 = 20;

    intercambiar(numero1, numero2);

    cout << "Resultados: " << numero1 << " | " << numero2 << endl;
    return 0;
}
