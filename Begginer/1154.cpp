#include <iostream>
#include <iomanip>

int main(){
    int I, M = 0, D = 0;

    while(std::cin >> I && I >= 0){
        M+=I; 
        D++;
    }

    std::cout << std::fixed << std::setprecision(2) << M / double(D) << std::endl;

    return 0;
}