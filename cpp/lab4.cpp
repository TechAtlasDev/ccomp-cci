// Laboratorio 4
// Laboratorio enfocado en el uso de las sentencias condicionales usando inputs

#include <iostream>

using namespace std;

int main() {
    char letra = '1';
    //cout << "Pon a continuación una letra: ";
    //cin >> letra;

    cout << endl;

    if (letra >= 65 && letra <= 90) {
        cout << "Es una letra en mayuscula";
    } else if (letra >= 97 && letra <= 122) {
        cout << "Es una letra en minuscula";
    } else if (letra >= 48 && letra <= 57) {
        cout << "Es un numero";
    } else {
        cout << "Tienes que poner una letra del alfabeto";
        return 1;
    }

    cout << endl;
    cout << endl;

    // Problema 2

    int variable1 = 123;

    int centenas = variable1 / 100;
    int decenas = (variable1 % 100) / 10;
    int unidades =  variable1 % 10;

    cout << "Unidades: " << unidades << endl;
    cout << "Decenas: " << decenas << endl;
    cout << "Centenas: " << centenas << endl;

    return 0;
}
