#include <iostream>

int main(){
    for(double i = 0, I = 0, J = 1, C = 3; i <= 32; i++, J++){
        (i == C) ? I+=0.2, J = 1 + I, C+=3 : I+=0, J+=0, C+=0;
        std::cout << "I=" << I << " J=" << J << std::endl;
    }

    return 0;
}