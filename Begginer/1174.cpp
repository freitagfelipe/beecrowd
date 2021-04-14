#include <iostream>
#include <iomanip>

int main(){
    double X, A[100];

    for(int i = 0; i < 100; i++){
        std::cin >> X;
        A[i] = X;
    }
    
    for(int i = 0; i < 100; i++){
        if(A[i] <= 10)
            std::cout << "A[" << i << "] = " << std::fixed << std::setprecision(1) << A[i] << std::endl;
    }

    return 0;
}