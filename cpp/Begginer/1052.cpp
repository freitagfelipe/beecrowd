#include <iostream>

int main() {
    int V;
    std::string vector[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    std::cin >> V;
    
    std::cout << vector[V - 1] << std::endl;
    
    return 0;
}