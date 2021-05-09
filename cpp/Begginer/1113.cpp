#include <iostream>

int main() {
    int X, Y;

    while(std:: cin >> X >> Y && !(X == Y)) {
        if(X > Y)
            std::cout << "Decrescente" << std::endl;
        else if(X < Y)
            std::cout << "Crescente" << std::endl;
    }

    return 0;
}