// Laboratorio 20
// Usando funciones recursivas para determinar si un número es capicúa
// TAREA: HUMILLAR A EDMUNDO

#include <iostream>

using namespace std;

int reducir_numero(int x) {
    // Eliminando el ultimo digito
    x %= 10;

    // Eliminando el primer digito
    x

    return x;
}

int last_digit(int x) {
    return x % 10;
}

int first_digit(int x) {
    if (x < 10) {
        return x;
    } else {
        return first_digit(x/10);
    }
}

bool es_capicua(int x) {
    if (x < 10) {
        return true;
    } else {
        int f = first_digit(x);
        int l = last_digit(x);

        if (f != l) {
            return false;
        } else {
            return true;
        }
    }
}

int main() {
    int numero = 22;
    bool capicua = es_capicua(numero);

    cout << "Es capicua: " << capicua << endl;
    return 0;
}
