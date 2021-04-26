#include <iostream>

int main() {
    int x;

    std::cin >> x;

    while(x != 0) {
        for(int i = 1; i <= x; i++) {
            if(i == x)
                std::cout << i << std::endl;
            else
                std::cout << i << " ";
        }

        std::cin >> x;
    }

    return 0;
}