// Laboratorio 21
// Clasificando el contenido de una matriz en secciones

#include <iostream>
#include <string>

using namespace std;

int clasificar_char(char caracter) {
    int intcaracter = static_cast<int>(caracter);

    if (intcaracter >= 97 && intcaracter <= 122) {
        cout << "Minuscula" << endl;
        return 0;
    } else if (intcaracter >= 65 && intcaracter <= 90) {
        cout << "Mayuscula" << endl;
        return 1;
    } else if (intcaracter >= 48 && intcaracter <= 57) {
        cout << "Numero" << endl;
        return 2;
    } else if ((intcaracter >= 33 && intcaracter <= 47) || 
               (intcaracter >= 58 && intcaracter <= 64) || 
               (intcaracter >= 91 && intcaracter <= 96) || 
               (intcaracter >= 123 && intcaracter <= 126)) {
        cout << "Especial" << endl;
        return 3;
    }

    return 1;
}

int main() {    
    int longitud = 4;
    char matriz[longitud][longitud] = {
        {'a', '2', 'b', 'C'},
        {'A', '@', '3', '>'},
        {'c', 'D', '4', 'B'},
        {'1', '$', '-', 'd'}
    };

    cout << endl << "===== TABLA INICIAL ======" << endl;
    for (int fila = 0; fila < longitud; ++fila) {
        for (int columna = 0; columna < longitud; ++columna) {
            cout << matriz[fila][columna] << " ";
        }
        cout << endl;
    }
    cout << endl << "===== TABLA INICIAL ======" << endl;
    
    // Recorriendo por cada elemento de la matriz
    for (int fila = 0; fila < longitud; ++fila) {
        cout << "===============" << endl;
        for (int columna = 0; columna < longitud; ++columna) {
            char data = matriz[fila][columna];
            int resultado = clasificar_char(data);
            
            cout << data << " | " << resultado << endl;
            matriz[columna][fila] = matriz[fila][columna];
        }
    }

    // Imprimiendo al tabla
    cout << endl << "===== TABLA FINAL ======" << endl;
    for (int fila = 0; fila < longitud; ++fila) {
        for (int columna = 0; columna < longitud; ++columna) {
            cout << matriz[fila][columna] << " ";
        }
        cout << endl;
    }
    cout << endl << "===== TABLA FINAL ======" << endl;
    
    return 0;
}