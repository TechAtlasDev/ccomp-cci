#include <iostream>

using namespace std;

int contar(char cadena[]) {
    int contador = 0;
    for (int i=0; cadena[i] != '\0'; i++) {
        contador++;
    }
    return contador;
}

int main() {
    char palabra[] = "Hola mundo";
    cout << "Antes" << endl;
    int longitud = contar(palabra);
    cout << "Longitud: " << longitud << endl;

    return 0;
}
