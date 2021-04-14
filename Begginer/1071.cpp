#include <iostream>

int main(){
    int X, Y, S = 0;

    std::cin >> X >> Y;
    if(X > Y)
        std::swap(X, Y);
    if(X == Y)
        std::cout << S << std::endl;
    else{
        (X % 2 == 0) ? X+=1 : X+=2;

        for(X; X < Y; X+=2)
            S+=X;
    }
    
    std::cout << S << std::endl;

    return 0;
}