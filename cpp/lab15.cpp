// Laboratorio 15
// Laboratorio que identifica si una palabra es palíndroma

#include <iostream>

using namespace std;

bool es_palindroma(string palabra) {
    int longitud_palabra = palabra.size();

    for (int i=0; i<(longitud_palabra/2); i++) {

        if (palabra.at(i) != palabra.at(longitud_palabra-i-1)) {
            return false;
        }
    }
    return true;
}

int main() {
    string palabra;

    cout << "Pon una palabra: ";
    cin >> palabra;

    bool resultado = es_palindroma(palabra);
    cout << resultado;

    return 0;
}
