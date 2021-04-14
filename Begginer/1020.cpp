#include <iostream>

int main(){
    int N, A, M, D;

    std::cin >> N;
    A = N / 365;
    M = (N - A * 365) / 30;
    D = (N - A * 365 - M * 30);

    std::cout << A << " ano(s)" << std::endl << M << " mes(es)" << std::endl << D << " dia(s)" << std::endl;

    return 0;
}