#include <iostream>

int main(){
    int X[10], N;

    for(int i = 0; i < 10; i++){
        std::cin >> N;
        (N > 0) ? X[i] = N : X[i] = 1;
    }

    for(int i = 0; i < 10; i++)
        std::cout << "X[" << i << "] = " << X[i] << std::endl;  

    return 0;
}