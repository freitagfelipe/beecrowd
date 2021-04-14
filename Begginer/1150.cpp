#include <iostream>

int main(){
    int x, z, r = 1;

    std::cin >> x >> z;

    while(x >= z)
        std::cin >> z;

    for(int t = x, y = x + 1; t <= z; y++, r++)
        t += y;

    std::cout << r << std::endl;

    return 0;
}