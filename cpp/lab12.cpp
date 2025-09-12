// Laboratorio 12
// Analizando strings

#include <iostream>

using namespace std;

int main() {
    string data = "a";
    int conteo = 0;

    while (data.at(conteo) != '\0') {
        cout << data.at(conteo) << endl;
        conteo++;
    }

    cout << conteo << endl;
    return 0;
}
