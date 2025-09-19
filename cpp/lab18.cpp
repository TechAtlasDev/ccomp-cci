// Laboratorio 18
// Usando funciones recursivas para la creación del algoritmo de fibonacci

// Secuencia de fibonacci
// 1  1  2  3  5  8

// fibonacci(5)
// 4 y 3 = 7
//

#include <iostream>

using namespace std;

int fibonacci(int x) {
    if (x == 1) {
        return 1;
    } else if (x == 0) {
        return 0;
    }

    return fibonacci(x-1) + fibonacci(x-2);
}

int main() {
    cout << "Hola mundo" << endl;
    int resultado = fibonacci(8);
    cout << resultado << endl;
    return 0;
}
