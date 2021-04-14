#include <iostream>
#include <iomanip>

int main(){
    double X, M;

    for(int i = 0; i < 2; i+=0){
        std::cin >> X;

        (X >= 0 && X <= 10) ? M+=X, i++ : i+=0;
        
        if(X < 0 || X > 10)
            std::cout << "nota invalida" << std::endl;
    }
    
    std::cout << std::fixed << std::setprecision(2) << "media = " << M / 2 << std::endl;

    return 0;
}