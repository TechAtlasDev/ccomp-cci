// Laboratorio 30
// Implementando una función que intercambie los valores de dos variables usando punteros

#include <iostream>

using namespace std;

void printa(int *puntero, int tamano) {
    cout << "[";

    for (int i=0; i<tamano; i++) {
        cout << *puntero;
        &*puntero++;
    }

    cout << "]" << endl;
}

void intercambiar(int *a, int *b) {
    int temp = *a;

    *a = *b;
    *b = temp;
}

int main() {
    int arr[5] = {0, 1, 2, 3, 4};
    printa(arr, 5);

    return 0;
}
