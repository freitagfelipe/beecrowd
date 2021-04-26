#include <iostream>

int main() {
    int X, P = 0;

    for(int i = 0; i < 5; i++) {
        std::cin >> X;
        
        (X % 2 == 0) ? P++ : P += 0;
    }

    std::cout << P << " valores pares" << std::endl;

    return 0;
}