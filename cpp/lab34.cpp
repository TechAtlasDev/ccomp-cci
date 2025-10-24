// Laboratorio 34
// Implementando el algoritmo de Bubble Sort de forma recursiva

#include <iostream>

using namespace std;

// Función para imprimir el array
void printArray(int *arr, int tamano) {
    cout << "[";
    for (int i = 0; i < tamano; i++) {
        cout << arr[i];
        if (i < tamano - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}

// Función para hacer el intercambio de dos elementos
void intercambiar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Función recursiva que implementa el algoritmo de Bubble Sort
void bubbleSortRecursivo(int *arr, int tamano) {
    // Caso base: si el tamaño es 1, ya está ordenado
    if (tamano == 1) {
        return;
    }

    // Una pasada del algoritmo para "burbujeo"
    for (int i = 0; i < tamano - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            intercambiar(&arr[i], &arr[i + 1]);
        }
    }

    // Llamada recursiva para el resto del array
    bubbleSortRecursivo(arr, tamano - 1);
}

int main() {
    int arr[5] = {5, 3, 4, 1, 2};
    int tamano = 5;

    cout << "Array original: ";
    printArray(arr, tamano);

    // Ordenando el array
    bubbleSortRecursivo(arr, tamano);

    cout << "Array ordenado: ";
    printArray(arr, tamano);

    return 0;
}