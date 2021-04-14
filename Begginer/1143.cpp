#include <iostream>
#include <cmath>

int main(){
    int L;

    std::cin >> L;

    for(int i = 1; i <= L; i++)
        std::cout << i << " " << pow(i, 2) << " " << pow(i, 3) << std::endl;

    return 0;
}