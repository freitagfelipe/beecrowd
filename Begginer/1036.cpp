#include <iostream>
#include <iomanip>
#include <cmath>

int main(){
    double A, B, C, DELTA, R1, R2;

    std::cin >> A >> B >> C;
    DELTA = pow(B, 2) - 4 * A * C;
    if(A == 0 || DELTA < 0)
        std::cout << "Impossivel calcular" << std::endl;
    else if(DELTA > 0){
        R1 = (-B + sqrt(DELTA)) / (2 * A);
        R2 = (-B - sqrt(DELTA)) / (2 * A);
        std::cout << std::fixed << std::setprecision(5) << "R1 = " << R1 << "\nR2 = " << R2 << std::endl;
    }else if(DELTA == 0){
        R1 = -B / (2 * A);
        std::cout << std::fixed << std::setprecision(5) << "R1 = " << R1 << "\nR2 = " << R1 << std::endl;
    }

    return 0;
}