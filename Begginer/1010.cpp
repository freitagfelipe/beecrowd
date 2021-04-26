#include <iostream>
#include <iomanip>

int main() {
    int A, A2, B, B2;
    double VA, VB;

    std::cin >> A >> A2 >> VA >> B >> B2 >> VB;

    std::cout << std::fixed << std::setprecision(2) << "VALOR A PAGAR: R$ " << A2 * VA + B2 * VB << std::endl;

    return 0;
}