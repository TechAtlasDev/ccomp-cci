// Laboratorio 7
// Números primos

#include <iostream>

using namespace std;

int main() {
    int num = 2;
    int rango;

    cout << "Pon un numero: ";
    cin >> rango;
    cout << endl;

    int mitad = 0;

    while (num < rango) {
        mitad = (num / 2) + 1;
        int middle_rango = 2;
        int primo = true;

        while (middle_rango < mitad) {
            if ((num % middle_rango) == 0) {
                primo = false;
                //cout << "Divisor: " << middle_rango << " Num: " << num << endl;
                break;
            }

            middle_rango += 1;
        }


        if (primo) {
            cout << "El " << num << " es primo";
        }

        num += 1;
    }

    return 0;
}
