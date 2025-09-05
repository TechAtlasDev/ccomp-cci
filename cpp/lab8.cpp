// Laboratorio 8
// Experimentando con bucles

#include <iostream>

using namespace std;

int cantidad_digitos(int numero) {
    int conteo = 0;
    int m = 1;

    while (numero % m != numero){
        m *= 10;
        conteo += 1;
    }
    return conteo;
}

int obtener_digito(int numero, int puesto) {
    for (int i=1; i<puesto; i*=10) {

    }
}

int main() {
    int var1;

    cout << ">> Pon un numero: ";
    cin >> var1;

    // Verificando si este numero es de 3 a 9 digitos
    int digitos = cantidad_digitos(var1);
    cout << digitos << endl;


    return 0;
}
