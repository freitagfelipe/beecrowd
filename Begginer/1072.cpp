#include <iostream>

int main(){
    int N, I = 0, O = 0;
    long int X;

    std::cin >> N;

    for(int i = 0; i < N; i++){
        std::cin >> X;
        (X >= 10 && X <= 20) ? I++ : O++;
    }

    std::cout << I << " in" << '\n' << O << " out" << std::endl;

    return 0;
}