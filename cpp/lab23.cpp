// Laboratorio 23
// Creando una funcion recursiva para invertir el orden de los elementos de una lista

#include <iostream>

using namespace std;

void print_list(int arr[], int tamano) {
    cout << "[ ";
    for (int i=0; i < tamano; i++) {
        cout << arr[i] << " ";
    }
    cout << "]" << endl;
}

void intercambio(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void invertir(int arr[], int tamano, int pos=0) {
    if (pos == tamano/2) {
        return;
    } else {
        int a = arr[pos];
        int b = arr[tamano-pos-1];
        intercambio(a, b);
        pos++;
        invertir(arr, tamano, pos);
    }
}

int main() {
    int arr[5];

    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;

    print_list(arr, 5);
    invertir(arr, 5);
    print_list(arr, 5);

    return 0;
}
