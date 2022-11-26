#include <iostream>
#include <iomanip>

int main() {
    char operation;
    double M[12][12], answer = 0, num;

    std::cin >> operation;

    for(int i = 0; i < 12; i++)
        for(int j = 0; j < 12; j++) {
            std::cin >> num;
            M[i][j] = num;
        }

    for(int i = 0; i < 12; i++)
        for(int j = i + 1; j < 12; j++)
            answer += M[i][j];

    if(operation == 'M')
        answer = answer / 66;

    std::cout << std::fixed << std::setprecision(1) << answer << std::endl;

    return 0;
}