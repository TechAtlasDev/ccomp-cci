// Laboratorio 31
// Este laboratorio nos muestra que a pesar de que la variable x esté en el ámbito scope del if, aún así x no se destruye, y lo que pasa es que el puntero toma la dirección de la memoria de dicha variable.

#include <iostream>

using namespace std;

int main() {
    int *puntero;

    if (true) {
        int x = 10;
        puntero = &x;
    }

    cout << *puntero << endl;
    cout << puntero << endl;

    return 0;
}
