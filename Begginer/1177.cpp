#include <iostream>

int main(){
    int T;
    
    std::cin >> T;

    for(int i = 0, X = 0; i < 1000; i++, X++){
        (X == T) ? X = 0 : X+=0;
        std::cout << "N[" << i << "] = " << X << std::endl;
    }

    return 0;
}