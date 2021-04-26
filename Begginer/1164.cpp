#include <iostream>

int main() {
    long int qct, x;

    std::cin >> qct;

    for(int i = 1; i <= qct; i++) {
        int resp = 0;

        std::cin >> x;

        for(int y = 1; y < x; y++)
            (x % y == 0) ? resp += y : resp += 0;
        
        if(resp == x)
            std::cout << x << " eh perfeito" << std::endl;
        else
            std::cout << x << " nao eh perfeito" << std::endl;
    }

    return 0;
}