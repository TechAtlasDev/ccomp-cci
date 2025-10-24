// Calculando la distancia entre 2 puntos con programación orientada a objetos

#include <iostream>
#include <cmath>

using namespace std;

class Punto {
    public:
        int x;
        int y;

        void print() {
            cout << "[ X: " << x << ", Y: " << y << " ]" << endl;
        }

        float distancia(Punto p) {
            float resultado = sqrt(pow((x-p.x), 2)+pow((y-p.y), 2));
            return resultado;
        }
};

int main() {
    Punto p1;
    p1.x = 1;
    p1.y = 1;
    p1.print();

    Punto p2;
    p2.x = 3;
    p2.y = 4;
    p2.print();

    cout << "Calculando la distancia entre 2 puntos: ";
    float resultado = p1.distancia(p2);

    cout << resultado << endl;

    return 0;
}
