#include <iostream>
#include <iomanip>

int main() {
    double C;
    
    std::cin >> C;

    for(int i = 0; i < 100; i++) {
        (i == 0) ? C = C : C /= 2;
        
        std::cout << std::fixed << std::setprecision(4) << "N[" << i << "] = " << C << std::endl;
    }

    return 0;
}