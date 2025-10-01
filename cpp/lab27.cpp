// Laboratorio 27
// Punteros y direcciones de memoria

#include <iostream>

using namespace std;

int main() {
    int* puntero;
    int arr[5] = {0, 5, 9, 6, 4};

    cout << "Array: " << arr << endl;

    for (int i=0; i<5; i++) {
        cout << &arr[i] << endl;
    }

    cout << endl << "==========" << endl;
    int* puntero1;

    puntero1 = &arr[0];

    cout << *puntero1 << endl;
    puntero1++;
    cout << *puntero1 << endl;

    return 0;
}
