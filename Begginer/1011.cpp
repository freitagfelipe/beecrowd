#include <iostream>
#include <iomanip>
#include <cmath>

int main(){
    double raio;

    std::cin >> raio;

    std::cout << std::fixed << std::setprecision(3) << "VOLUME = " << 4.0 / 3 * 3.14159 * pow(raio, 3) << std::endl;

    return 0;
}