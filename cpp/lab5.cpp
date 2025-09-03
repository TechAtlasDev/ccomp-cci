// Laboratorio 5
// Laboratorio enfocado en la experimentación, uso y análisis de bucles

#include <iostream>

using namespace std;

int main() {
    int i = 1;

    // Imprimiendo numeros del 1 al 10
    while (i < 10) {
        cout << i << endl;
        i += 1;
    }

    cout << "========" << endl;

    // Imprimiendo numeros del 9 al 1
    while (i >= 1) {
        cout << i << endl;
        i -= 1;
    }

    cout << "========" << endl;

    int num = 1;

    // Imprimiendo multiplos de 3 menores de 100
    while (num < 100) {
        if ((num % 3) == 0) {
            cout << num << " ";
        }

        num += 1;
    }

    cout << endl;

    cout << "========" << endl;
}
