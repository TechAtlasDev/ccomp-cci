#include <iostream>

using namespace std;

void print_list(int arr[], int tamano) {
    cout << "[ ";
    for (int i=0; i < tamano; i++) {
        cout << arr[i] << " ";
    }
    cout << "]" << endl;
}

void invertir(int lista[], int tamano, int pos=0) {
    if (pos == tamano/2) {
        return;
    } else {
        int temp = lista[pos];
        lista[pos] = lista[tamano-pos-1];
        lista[tamano-pos-1] = temp;
        pos++;
        invertir(lista, tamano, pos);
    }
}

int main() {
    int lista[5] = {1, 2, 3, 4, 5};
    print_list(lista, 4);

    invertir(lista, 4);

    print_list(lista, 4);

    return 0;
}
