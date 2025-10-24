// Laboratorio 35
// Usando POO para crear un vector
// Un vector tiene 2 puntos, el de inicio y el de final

#include <iostream>

using namespace std;

// Definiendo los puntos
class Punto {
    public:
        int x;
        int y;
        void print() {
            cout << "[ X: " << x << ", Y: " << y << " ]" << endl;
        }
};

class Vector {
    Punto inicio;
    Punto fin;
    public:
        void print() {
            cout << "[ VECTOR ]" << endl;
            cout << "[ Inicio: " << inicio.x << ", " << inicio.y << " | Final: " << fin.x << ", " << fin.y << " ]" << endl;
        }
};

int main() {
    Punto inicio_vector;
    inicio_vector.x = 0;
    inicio_vector.y = 0;

    Punto final_vector;
    final_vector.x = 6;
    final_vector.y = 3;

    Vector vector1(inicio_vector, final_vector);

    vector1.print();

    return 0;
}
