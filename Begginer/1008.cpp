#include <iostream>
#include <iomanip>

int main(){
    int NUMBER, H;
    float S;

    std::cin >> NUMBER >> H >> S;

    std::cout << "NUMBER = " << NUMBER << std::endl << std::fixed << std::setprecision(2) << "SALARY = U$ " << H * S << std::endl;

    return 0;
}