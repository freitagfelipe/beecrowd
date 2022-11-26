#include <iostream>

int main() {
    double N;
    std::cin >> N;

    if(0 <= N && N <= 25.00)
        std::cout << "Intervalo [0,25]" << std::endl;
    else if(25.00 < N && N <= 50.00)
        std::cout << "Intervalo (25,50]" << std::endl;
    else if(50.00 < N && N <= 75.00)
        std::cout << "Intervalo (50,75]" << std::endl;
    else if(75.00 < N && N <= 100)
        std::cout << "Intervalo (75,100]" << std::endl;
    else
        std::cout << "Fora de intervalo" << std::endl;

    return 0;
}