#include <iostream>
#include <iomanip>

int main() {
    double M[12][12], answer = 0, num;
    char operation;

    std::cin >> operation;

    for(int i = 0; i < 12; i++)
        for(int j = 0; j < 12; j++) {
            std::cin >> num;
            M[i][j] = num;
        }

    for(int i = 11, y = 1; i > 6; i--, y++)
        for(int j = y; j < i; j++)
            answer += M[i][j];

    if(operation == 'M')
        answer = answer / 30;

    std::cout << std::fixed << std::setprecision(1) << answer << std::endl;

    return 0;
}