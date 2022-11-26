#include <iostream>

int main() {
    int N, T;
    std::string resp;

    std::cin >> N;

    for(int i = 0; i < N; i++) {
        std::cin >> T;
        if(T == 2)
            resp = " eh primo";
        else
            for(int j = 2, c = 0; j < T - 1 && c != 1; j++) {
                if(T % j == 0) {
                    resp = " nao eh primo";
                    c++;
                } else
                    resp = " eh primo";
            }
        
        std::cout << T << resp << std::endl;
    }
    
    return 0;
}