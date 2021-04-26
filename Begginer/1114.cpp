#include <iostream>

int main() {
    int S;

    while(std::cin >> S && S != 2002)
        std::cout << "Senha Invalida" << std::endl;

    std::cout << "Acesso Permitido" << std::endl;

    return 0;
}