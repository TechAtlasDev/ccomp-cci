// Laboratorio 14
// Este laboratorio se enfoca en el conteo de veces que aparece una letra en específico en una palabra

#include <iostream>

using namespace std;

int main() {
    string palabra;
    char letra_busqueda;

    cout << "Pon la palabra de prueba: ";
    getline(cin, palabra);

    cout << "Pon la letra de busqueda: ";
    cin >> letra_busqueda;

    int conteo = 0;

    for (int i=0; i<palabra.size(); ++i) {
        if (letra_busqueda == palabra.at(i))
            ++conteo;
    }

    cout << conteo;

    return 0;
}
