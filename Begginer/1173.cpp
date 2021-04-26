#include <iostream>

int main() {
    int X;

    std::cin >> X;
    
    for(int i = 0; i < 10; i++, X*=2)
        std::cout << "N[" << i << "] = " << X << std::endl;

    return 0;
}