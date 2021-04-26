#include <iostream>
#include <iomanip>

int main() {
    double A, B;

    std::cin >> A >> B;

    std::cout << std::fixed << std::setprecision(5) << "MEDIA = " << (A * 3.5 + B * 7.5) / 11 << std::endl;

    return 0;
}