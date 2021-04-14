#include <iostream>

int main(){
    int X, N[20];

    for(int i = 19; i >= 0; i--){
        std::cin >> X;
        N[i] = X;
    }
    
    for(int i = 0; i < 20; i++)
        std::cout << "N[" << i << "] = " << N[i] << std::endl;

    return 0;
}