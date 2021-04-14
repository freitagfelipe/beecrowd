#include <iostream>

int main(){
    int X, Y;

    while(std::cin >> X >> Y && X != 0 && Y != 0){
        if(X > 0 && Y > 0)
            std::cout << "primeiro" << std::endl;
        else if(X < 0 && Y > 0) 
            std::cout << "segundo" << std::endl;
        else if(X < 0 && Y < 0)
            std::cout << "terceiro" << std::endl;
        else if(X > 0 && Y < 0)
            std::cout << "quarto" << std::endl;
    }

    return 0;
}