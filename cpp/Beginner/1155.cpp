#include <iostream>
#include <iomanip>

int main() {
    double s = 1;

    for(double i = 2; i <= 100; i++)
        s += 1 / i;

    std::cout << std::fixed << std::setprecision(2) << s << std::endl;

    return 0;
}