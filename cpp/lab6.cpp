// Laboratorio 6
// Experimentando con bucles

#include <iostream>

using namespace std;

void separator() {
    cout << " ========== " endl;
}

void test1() {
    // Test1: Haciendo que se imprima del 0 al 9
    int var1 = 0;
    int limit = 10;

    while (var1 < limit) {
        cout << var1 << " ";
        var1 += 1;
    }
}

void test2() {
    // Test2: Haciendo que se imprima del 0 al 20 pero exceptuando números pares
    int var1 = 0;
    int limit = 20;

    while (var1 < limit) {
        var1 += 1;

        if (var1 % 2 == 0) {
            continue;
        } else {
            cout << var1 << " ";
        }
    }
}

int main() {
    separator();
    test1();
    separator();
    test2();
    return 0;
}
