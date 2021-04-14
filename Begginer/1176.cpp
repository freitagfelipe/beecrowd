#include <iostream>

int main(){
    long long int t, res, x, y, N;

    std::cin >> t;

    for(int i = 0; i < t; i++){
        x = 0, y = 1;
        std::cin >> N;

        if(N == 0)
            res = 0;
        else if(N == 1)
            res = 1;
        else {
            for(int i = 2; i <= N; i++){
                res = x + y;
                x = y;
                y = res;
            }
        }

        std::cout << "Fib(" << N << ") = " << res << std::endl;
    }

    return 0;
}