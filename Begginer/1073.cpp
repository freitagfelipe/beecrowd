#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    int N;
    
    std::cin >> N;
    (N % 2 != 0) ? N-- : N += 0;

    for(int i = 2; i <= N; i += 2)
        std::cout << i << "^2 = " << std::fixed << std::setprecision(0) <<  pow(i, 2) << std::endl;

    return 0;
}