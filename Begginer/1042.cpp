#include <iostream>
#include <algorithm>

int main() {
    int O[3], C[3];

    for(int i = 0; i < 3; i++) {
        std::cin >> O[i];
        C[i] = O[i];
    }

    for(int i = 0; i < 3; i++)
        for(int j = i + 1; j < 3; j++)
            if(C[i] > C[j]) 
                std::swap(C[i], C[j]);

    std::cout << C[0] << '\n' << C[1] << '\n' << C[2] << '\n' << std::endl;
    std::cout << O[0] << '\n' << O[1] << '\n' << O[2] << std::endl;

    return 0;
}