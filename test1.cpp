#include <iostream>

int main() {

    int val1 = 10;
    int val2 = 20;
    int result = val1 + val2;

    std::cout << "Este es el resultado de tu compleja ecuación " << std::endl;
    std::cout << result << std::endl;

    int dni_usuario;

    std::cout << "Pon tu DNI: ";
    std::cin >> dni_usuario;

    std::cout << "TU DNI es: " << dni_usuario << std::endl;

    return 0;
}

