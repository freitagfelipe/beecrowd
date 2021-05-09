#include <iostream>

int main() {
    int L, L1, T;

    std::cin >> L >> T;

    L1 = L;

    for(int j = 1; j <= T; j++) {        
        if (j != L1)
            std::cout << j << " ";
        else if(j == L1) {
            std::cout << j << std::endl;
            L1 += L;
        }
    }

    return 0;
}