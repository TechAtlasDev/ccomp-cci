#include <iostream>

using namespace std;

int sumArrayIterativa() {

}

int main() {
    int tamano = 5;
    int* puntero = new int[tamano];

    // Rellenando el array
    for (int i=0; i<tamano; i++) {
        puntero[i] = i;
    }

    // Imprimiendo el array
    for (int i=0; i<tamano; i++) {
        cout << puntero[i] << " ";
    }
    cout << endl;

    // Sumando items del array
    int sumatoria = sumArrayIterativa(puntero, tamano);

    cout << "Sumatoria: " << sumatoria << endl;

    return 0;
}
