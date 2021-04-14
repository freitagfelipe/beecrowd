#include <iostream>

int main(){
    int S, E;

    std::cin >> S >> E;
    
    if(S >= E)
        std::cout << "O JOGO DUROU " << 24 - S + E << " HORA(S)" << std::endl;
    else if(E > S)
        std::cout << "O JOGO DUROU " << E - S << " HORA(S)" << std::endl;
    
    return 0;
}