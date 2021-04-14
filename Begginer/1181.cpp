#include <iostream>
#include <iomanip>

int main(){
    int L;
    double R = 0, M[12][12];
    char T;

    std::cin >> L >> T;

    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++)
            std::cin >> M[i][j];
    }

    for(int i = 0; i < 12; i++)
        R+=M[L][i];
    
    (T == 'M') ? R/=12 : R+=0;

    std::cout << std::fixed << std::setprecision(1) << R << std::endl;

    return 0;
}