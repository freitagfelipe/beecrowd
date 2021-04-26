#include <iostream>
#include <iomanip>

int main() {
    int x = 1;

    while(x) {
        double n = 0, nt = 0, z = 0;

        for(int i = 1; i <= 2; (nt >= 0 && nt <=10) ? i++, n += nt : i += 0) {
            std::cin >> nt;

            if(!(nt >= 0 && nt <= 10))
                std::cout << "nota invalida" << std::endl;
        }

        std::cout << std::fixed << std::setprecision(2) << "media = " << n / 2 << std::endl;

        while(!(z >= 1 && z <= 2)) {
            std::cout << "novo calculo (1-sim 2-nao)" << std::endl;
            std::cin >> z;
            (z == 1) ? x = 1 : x = 0;
        }
    }

    return 0;
}