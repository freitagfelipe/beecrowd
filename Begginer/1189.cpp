#include <iostream>
#include <iomanip>

int main(){
    double M[12][12], num, answer = 0;
    char operation;

    std::cin >> operation;

    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            std::cin >> num;
            M[i][j] = num;
        }
    }

    for(int i = 1; i < 6; i++){
        for(int j = 0; j < i; j++){
            answer += M[i][j];
        }
    }

    for(int i = 6, y = 5; i < 11; i++, y--){
        for(int j = 0; j < y; j++){
            answer += M[i][j];
        }
    }

    if(operation == 'M'){
        answer /= 30;
    }

    std::cout << std::fixed << std::setprecision(1) << answer << std::endl;

    return 0;
}