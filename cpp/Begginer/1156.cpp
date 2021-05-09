#include <iostream>
#include <iomanip>

int main() {
    double s = 1;

    for(double n = 3, d = 2; n <= 39; n += 2, d *= 2)
        s += n / d;

    std::cout << std::fixed << std::setprecision(2) << s << std::endl;

    return 0;
}