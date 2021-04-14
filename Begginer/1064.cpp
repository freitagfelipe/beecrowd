#include <iostream>
#include <iomanip>

int main(){
    double A, S, P = 0;

    for(int i = 0; i < 6; i++){
        std::cin >> A;
        (A > 0) ? P++, S+=A : P+=0;
    }

    std::cout << P << " valores positivos\n" << std::fixed << std::setprecision(1) << S / P << std::endl;

    return 0;
}