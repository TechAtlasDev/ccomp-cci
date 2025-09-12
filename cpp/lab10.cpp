// Laboratorio 10
// Encontrar los n primos antes de un número establecido

#include <iostream>

using namespace std;

bool es_primo(int valor, bool verbosidad=false){
    bool indicador = true;
    for (int i=2; i<(valor/2)+1; i++) {
        if (valor % i == 0) {
            indicador = false;
            if (verbosidad) {
                cout << "[+] Divisor encontrado: " << i << endl;
            } else {
                break;
            }
        }
    }

    return indicador;
}

void encontrar_primos(int limite, bool verbosidad=false) {
    for (int i=1; i<limite; i++){
            if (verbosidad) {
                cout << endl << " ====== " << i << " ====== " << endl;
            }
            int primo = es_primo(i, verbosidad);

            primo ? (cout << ">>> " << i << " Es primo" << endl) : (cout << ">>> " << i << " No es primo" << endl);
    }
}

int main() {
    int valor, verbosidad;

    cout << "Pon un numero: ";
    cin >> valor;

    cout << "Imprimir logs [0/1]: ";
    cin >> verbosidad;

    encontrar_primos(valor, verbosidad);

    return 0;
}
