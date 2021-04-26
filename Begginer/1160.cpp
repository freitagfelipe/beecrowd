#include <iostream>

int main() {

    int T, PA, PB, R;
    float CA, CB;

    std::cin >> T;

    for(int i = 0; i < T; i++) {
        R = 0;
        std::cin >> PA >> PB >> CA >> CB;
        
        while(1){
            PA += PA * (CA / 100);
            PB += PB * (CB / 100);
            R++;

            if(R > 100) {
                std::cout << "Mais de 1 seculo." << std::endl;
                break;
            } else if(PA > PB) {
                std::cout << R << " anos." << std::endl;
                break;
            }
        }
    }

    return 0;
}