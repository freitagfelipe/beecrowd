#include <iostream>

int main() {
    int N;
    long int X;

    std::cin >> N;

    for(int i = 0; i < N; i++) {
        std::cin >> X;
        
        if(X == 0)
            std::cout << "NULL" << std::endl;
        else if(X % 2 != 0 && X > 0)
            std::cout << "ODD POSITIVE" << std::endl;
        else if(X % 2 != 0 && X < 0)
            std::cout << "ODD NEGATIVE" << std::endl;
        else if(X % 2 == 0 && X > 0)
            std::cout << "EVEN POSITIVE" << std::endl;
        else if(X % 2 == 0 && X < 0)
            std::cout << "EVEN NEGATIVE" << std::endl;
    }

    return 0;
}