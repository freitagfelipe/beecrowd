#include <iostream>

int main(){
    int X, Y, S = 0;
    
    std::cin >> X >> Y;
    if(X > Y)
        std::swap(X, Y);
    
    for(int i = X; i <= Y; i++)
        (i % 13 != 0) ? S+=i : S+=0;

    std::cout << S << std::endl;

    return 0;
}