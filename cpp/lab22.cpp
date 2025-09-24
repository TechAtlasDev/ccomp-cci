// Laboratorio 22
// Sumando de manera recursiva la suma de los elementos de un array

#include <iostream>

using namespace std;

int sumaR(int arr[], int posicion, int tamano, int sumatoria) {
    if (posicion == tamano) {
        return sumatoria;
    }

    sumatoria += arr[posicion];
    posicion++;

    return sumaR(arr, posicion, tamano, sumatoria);
}

int main() {
    int arr[5];

    arr[0] = 2;
    arr[1] = 8;
    arr[2] = 6;
    arr[3] = 12;
    arr[4] = 22;

    int resultado = get_len(arr);
    cout << "Tamano: " << resultado << endl;

    int sumatoria = sumaR(arr, 0, 5, 0);
    cout << "Sumatoria final: " << sumatoria << endl;

    return 0;
}
