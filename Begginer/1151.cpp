#include <iostream>

int main(){
    int N;

    std::cin >> N;

    int F[N];
    
    F[0] = 0; F[1] = 1;

    for(int i = 2; i < N; i++)
        F[i] = F[i - 2] + F[i - 1];

    for(int i = 0; i < N; i++){    
        if(i != N - 1)
            std::cout << F[i] << " ";
        else
            std::cout << F[i] << std::endl;
    }

    return 0;
}