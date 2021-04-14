#include <iostream>

int main() {
    unsigned long int N1, N2;

    while(std::cin >> N1 >> N2)
        std::cout << (N1 ^ N2) << std::endl;

    return 0;
}