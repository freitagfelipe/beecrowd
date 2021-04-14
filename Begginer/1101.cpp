#include <iostream>

int main() {
    int M, N;

    while(std::cin >> M >> N && M > 0 && N > 0){
        int S = 0;

        if(M > N)
            std::swap(M, N);

        for(int i = M; i <= N; i++){
            std::cout << i << " ";
            S+=i;
        }

        std::cout << "Sum=" << S << std::endl;
    }

    return 0;
}