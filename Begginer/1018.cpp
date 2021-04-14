#include <iostream>

int main(){
    long int N; 
    int R, C = 0, D[7] = {100, 50, 20, 10, 5, 2, 1};

    std::cin >> N;

    std::cout << N << std::endl;

    while(C <= 6){
        R = N / D[C];

        std::cout << R << " nota(s) de R$ " << D[C] << ",00" << std::endl;
        
        N-=R * D[C];
        C++;
    }

    return 0;
}