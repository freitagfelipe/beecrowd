#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    double A, B, C;

    std::cin >> A >> B >> C;

    std::cout << std::fixed << std::setprecision(3) << "TRIANGULO: " << A * C / 2 << std::endl;
    std::cout << "CIRCULO: " << 3.14159 * pow(C, 2) << std::endl;
    std::cout << "TRAPEZIO: " << (A + B) * C / 2 << std::endl;
    std::cout << "QUADRADO: " << pow(B, 2) << std::endl;
    std::cout << "RETANGULO: " << A * B << std::endl;

    return 0;
}