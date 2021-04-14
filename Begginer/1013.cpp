#include <iostream>

int main(){
    int A, M = 0;

    for(int i = 0; i < 3; i++){
        std::cin >> A;
        (M < A) ? M = A : M+=0;
    }

    std::cout << M << " eh o maior" << std::endl;

    return 0;
}