#include <iostream>

int main() {
    int x;

    std::cin >> x;

    if(x % 2 != 0)
        x++;

    do {
        int r = 0;

        if(x % 2 != 0)
            x++;

        for(int i = 0; i < 5; i++, x += 2)
            r += x;

        std::cout << r << std::endl;

        std::cin >> x;
        
    } while(x != 0);

    return 0;
}