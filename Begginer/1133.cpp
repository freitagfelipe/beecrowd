#include <iostream>

int main(){
    int x, y;

    std::cin >> x >> y;

    if(x > y)
        std::swap(y, x);

    for(int i = x + 1; i < y; i++)
        if(i % 5 == 2 || i % 5 == 3)
            std::cout << i << std::endl;

    return 0;
}