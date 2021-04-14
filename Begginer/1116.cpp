#include<iostream>
#include <iomanip>

int main(){
    int X, Y, N;
    double R;

    std::cin >> N;

    for(int i = 0; i < N; i++){
        std::cin >> X >> Y;
        if(Y == 0)
            std::cout << "divisao impossivel" << std::endl;
        else{
            R = X / double(Y); 
            std::cout << std::fixed << std::setprecision(1) << R << std::endl;
        }
    }

    return 0;
}