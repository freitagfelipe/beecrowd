#include <iostream>

int main(){
    int A, B, C, D;

    std::cin >> A >> B >> C >> D;

    if(B > C && D > A && A % 2 == 0 && C + D > A + B && C > 0 && D > 0)
        std::cout << "Valores aceitos" << std::endl;
    else
        std::cout << "Valores nao aceitos" << std::endl;

    return 0;
}