#include <iostream>
#include <iomanip>

int main(){
    long double N; 
    int R = 0;
    double D[6] = {100, 50, 20, 10, 5, 2}, D2[5] = {100, 50, 25, 10, 5}, M[5] = {1, 0.50, 0.25, 0.10, 0.05};

    std::cin >> N;

    std::cout << "NOTAS:" << std::endl;

    for(int i = 0; i < 6; i++){
        R = N / D[i];
        std::cout << R << " nota(s) de R$ " << std::fixed << std::setprecision(2) << D[i] << std::endl;
        N-=R * D[i];
    }
    
    N*=100;
    std::cout << "MOEDAS:" << std::endl;

    for(int i = 0; i < 5; i++){
        R = N / D2[i];
        std::cout << R << " moeda(s) de R$ " << std::fixed << std::setprecision(2) << M[i] << std::endl;
        N-=R * D2[i];
    }

    std::cout << std::fixed << std::setprecision(0) << N << " moeda(s) de R$ 0.01" << std::endl;

    return 0;
}