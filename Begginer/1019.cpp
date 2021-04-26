#include <iostream>

int main() {
    int N, H, M, S;

    std::cin >> N;
    H = N / 3600;
    M = (N - H * 3600) / 60;
    S = N - H * 3600 - M * 60;

    std::cout << H << ":" << M << ":" << S << std::endl;

    return 0;
}