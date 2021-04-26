#include <iostream>

int main() {
    int X, P = 0, I = 0, POS = 0, N = 0;

    for(int i = 0; i < 5; i++) {
        std::cin >> X;
        
        (X % 2 == 0) ? P++ : P += 0;
        (X % 2 != 0) ? I++ : I += 0;
        (X > 0) ? POS++ : POS += 0;
        (X < 0) ? N++ : N += 0;
    }
    
    std::cout << P << " valor(es) par(es)\n" << I << " valor(es) impar(es)\n" << POS << " valor(es) positivo(s)\n" << N << " valor(es) negativo(s)" << std::endl;

    return 0;
}