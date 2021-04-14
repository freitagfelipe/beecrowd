#include <iostream>

int main(){
    int N, X;

    std::cin >> N;

    for(int i = 2, c = N * (N - 1); i < N; i++, c = X)
        X = c * (N - i);

    std::cout << X << std::endl;

    return 0;
}