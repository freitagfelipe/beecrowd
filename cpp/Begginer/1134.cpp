#include <iostream>

int main() {
    int N, A = 0, G = 0, D = 0;

    while(std::cin >> N && N != 4) {
        switch (N) {
            case 1:
                A++;
                break;
            case 2:
                G++;
                break;
            case 3:
                D++;
                break;
        }
    }
    
    std::cout << "MUITO OBRIGADO\n" << "Alcool: " << A << "\nGasolina: " << G << "\nDiesel: " << D << std::endl;
    
    return 0;
}