#include <iostream>
#include <iomanip>

int main(){
    int col;
    double M[12][12], answer = 0, num;
    char operation;

    std::cin >> col >> operation;

    for(int i = 0; i < 12; i++){
        for(int j = 0; j  < 12; j++){
            std::cin >> num;
            M[i][j] = num;
        }
    }

    for(int i = 0; i < 12; i++){
        answer += M[i][col];
    }

    if(operation == 'M'){
        answer = answer / 12;
    }

    std::cout << std::fixed << std::setprecision(1) << answer << std::endl;

    return 0;
}