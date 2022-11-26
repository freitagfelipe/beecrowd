#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    double X1, Y1, X2, Y2;

    std::cin >> X1 >> Y1 >> X2 >> Y2;

    std::cout << std::fixed << std::setprecision(4) << sqrt(pow((X1 - X2), 2) + pow((Y1 - Y2), 2)) << std::endl;

    return 0;
}