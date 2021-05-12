#include <iostream>
#include <cmath>

int main() {
    int N, Y, Z, X = 1;

    std::cin >> N;

    for(int i = 0; i < N; i++, X++)
        for(int j = 0; j < 2; j++) {
            (j == 0) ? (Y = pow(X, 2), Z = pow(X, 3)) : (Y = pow(X, 2) + 1, Z = pow(X, 3) + 1);  
            std::cout << X << " " << Y << " " << Z << std::endl;
        }

    return 0;
}