#include <iostream>

using namespace std;

int suma_impar(int arr[], int tamano, int pos=0, int total = 0) {
    if (pos==tamano) {
        return total;
    } else {
        if (arr[pos] % 2 != 0) {
            total += arr[pos];
            return suma_impar(arr, tamano, ++pos, total);
        } else {
            return suma_impar(arr, tamano, ++pos, total);
        }
    }
}

int main() {
    int arr[5] = {0, 1, 2, 3, 4};
    int sumatoria = suma_impar(arr, 5);
    cout << "Sumatoria impar: "  << sumatoria << endl;

    return 0;
}
