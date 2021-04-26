#include <iostream>

int main() {
    int X;
    
    std::cin >> X;
    
    for(int i = 1; i <= 10; i++)
        std::cout << i << " x " << X << " = " << X * i << std::endl;

    return 0;
}