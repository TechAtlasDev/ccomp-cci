// Algoritmo de bubble sort
#include <iostream>

using namespace std;

void swap(int *i, int *j) {
    int temp = *i;
    *i = *j;
    *j = temp;
}

int bubble_sort(int *arr, int tamano) {
    for (int j; j<tamano; j++) {
        cout << *arr << " | " << arr[j] << endl;
        if (arr[j] < *arr) {
            cout << "SWAP:" << " " << j << " " << *arr << endl;
            swap(j, *arr);
        } else {
            cout << "No SWAP:" << " " << j << " " << *arr << endl;
        }
        *arr++;
    }
}

int main() {
    int tamano = 5;
    int *puntero = new int[tamano];

    // Rellenando el array
    puntero[0] = 5;
    puntero[1] = 7;
    puntero[2] = 1;
    puntero[3] = 4;
    puntero[4] = 10;

    bubble_sort(puntero, tamano);

    return 0;
}
