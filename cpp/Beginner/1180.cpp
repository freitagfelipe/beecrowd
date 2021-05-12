#include <iostream>

int main() {
    int N, Z, R = 0, P = 0;
    
    std::cin >> N;

    for(int i = 0; i < N; i++) {
        std::cin >> Z;
        
        (Z < R) ? R = Z, P = i : R += 0;
    }

    std::cout << "Menor valor: " << R << "\nPosicao: " << P << std::endl;

    return 0;
}