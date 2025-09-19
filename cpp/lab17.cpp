// Laboratorio 17
// Laboratorio enfocado en el análisis y aplicación de funciones recursivas

#include <iostream>

using namespace std;

// factorial(4) = 4*3*2*1
long long factorial(int x) {
    if (x == 1) {
        return 1;
    }
    return x * factorial(x-1);
}


int main() {
    long long resultado = factorial(4);
    cout << resultado << endl;
    return 0;
}
