#include <iostream>
#include <iomanip>

int main(){
    std::string NOME;
    double SF, M;

    std::cin >> NOME >> SF >> M;

    std::cout << std::fixed << std::setprecision(2) << "TOTAL = R$ " << SF + (M * 15 / 100) << std::endl;

    return 0;
}