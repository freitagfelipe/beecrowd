#include <iostream>
#include <iomanip>

int main() {
    int C, Q; 
    double I[5] = {4, 4.5, 5, 2, 1.5};

    std::cin >> C >> Q;

    std::cout << std::fixed << std::setprecision(2) << "Total: R$ " << Q * I[C - 1] << std::endl;

    return 0;
}