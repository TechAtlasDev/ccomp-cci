// Laboratorio 13
// Laboratorio enfocado en la experimentación de llamado de funciones parametrizadas en referencia y valor

#include <iostream>

using namespace std;

int adicionar_por_valor(int numero) {
    return ++numero;
}

void adicionar_por_referencia_de_memoria(int &numero) {
    ++numero;
    return;
}

int main() {

    cout << "=== Laboratorio 13 ===" << endl;
    int numero = 2;
    adicionar_por_referencia_de_memoria(numero);

    cout << "Resultado: " << numero << endl;
    return 0;
}
