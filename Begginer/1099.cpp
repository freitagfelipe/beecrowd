#include <iostream>

int main(){
    int N, X, Y;

    std::cin >> N;

    for(int i = 0; i < N; i++){
        int S = 0;

        std::cin >> X >> Y;
        if(X > Y)
            std::swap(X, Y);

        (X % 2 == 0) ? X++ : X+=2;

        while(!(X >= Y)){
            S+=X;
            X+=2;
        }
        std::cout << S << std::endl;
    }

    return 0;
}