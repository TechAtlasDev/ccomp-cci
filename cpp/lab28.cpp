// Laboratorio 28
// Usando punteros para iterar de forma iterativa en filtros y estructuras de datos

#include <iostream>

using namespace std;

int main() {
    int longitud = 10;
    int arr[longitud] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    // Iterando por cada elemento del array
    int index = 0;

    while (index < longitud) {
        int *puntero = &arr[index];
        cout << "Puntero: " << *puntero << endl;

        index++;
    }

    while (index >= longitud) {
        int *puntero = &arr[index];
        cout << "Puntero: " << *puntero << endl;

        index--;
    }


    return 0;
}
