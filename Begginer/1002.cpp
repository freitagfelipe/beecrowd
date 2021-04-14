#include <iostream>
#include <cmath>
#include <iomanip>

int main(){
    double raio;

    std::cin >> raio;
    
    std::cout << std::fixed << std::setprecision(4) << "A=" << pow(raio, 2) * 3.14159 << std::endl;

    return 0;
}