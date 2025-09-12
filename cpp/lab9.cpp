// Laboratorio 9
// Detectar si un numero es palidromo o no
// Pendiente para terminar

#include <iostream>

using namespace std;

void print_separador() {
    cout << "----------" << endl;
}

int potencia(int base, int exponente) {
    if (exponente == 0) {
        return 1;
    }
    int value_initial = base;
    for (int i=1; i<exponente; i+=1) {
        value_initial *= base;
    }
    return value_initial;
}

bool es_par(int numero) {
    return numero%2==0;
}

int main() {
    int longitud_palabra = 6;

    int conteo_mitad_superior = 0;
    int conteo_mitad_inferior = 0;
    int mitad = 0;

    bool longitud_par = es_par(longitud_palabra);

    for (int i=0; i < longitud_palabra; i+=1) {
        int index_mitad = longitud_palabra/2;

        if (i<index_mitad) {
            conteo_mitad_inferior += i;
        } else if (i==index_mitad && !(longitud_par)) {
            mitad += i;
        } else {
            conteo_mitad_superior += i;
        }
    }

    print_separador();

    cout << "Valor del conteo inferior: " << conteo_mitad_inferior << endl;
    cout << "Mitad: " << mitad << endl;
    cout << "Valor del conteo superior: " << conteo_mitad_superior << endl;


    return 0;
}
