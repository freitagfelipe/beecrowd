#include <iostream>

int main() {
    int X, M, P;

    for(int i = 1; i <= 100; i++) {
        std::cin >> X;
        
        (i == 1) ? M = X, P = i : i += 0;
        (X > M) ? M = X, P = i : i += 0;
    }

    std::cout << M << '\n' << P << std::endl;

    return 0;
}