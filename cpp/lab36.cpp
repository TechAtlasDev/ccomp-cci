// Calculando la distancia entre 2 puntos
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int punto1_x = 1;
    int punto1_y = 1;

    int punto2_x = 5;
    int punto2_y = 4;

    float distancia = sqrt(pow((punto1_x-punto2_x), 2) + pow((punto1_y-punto2_y), 2));
    cout << distancia << endl;
}
