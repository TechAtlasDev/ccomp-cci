// Laboratorio 31
// Este laboratorio nos muestra que a pesar de que la variable x est� en el �mbito scope del if, a�n as� x no se destruye, y lo que pasa es que el puntero toma la direcci�n de la memoria de dicha variable.

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
