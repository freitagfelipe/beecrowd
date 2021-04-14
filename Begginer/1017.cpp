#include <iostream>
#include <iomanip>

int main(){
    int T, VM;

    std::cin >> T >> VM;

    std::cout << std::fixed << std::setprecision(3) << VM * T / 12.0 << std::endl;

    return 0;
}