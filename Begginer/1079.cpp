#include <iostream>
#include <iomanip>

int main(){
    int N;
    double X, Y, Z;

    std::cin >> N;

    for(int i = 0; i < N; i++){
        std::cin >> X >> Y >> Z;
        std::cout << std::fixed << std::setprecision(1) << (X * 2 + Y * 3 + Z * 5) / 10 << std::endl;
    }

    return 0;
}