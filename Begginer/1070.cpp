#include <iostream>

int main() {
    int X, L = 5;

    std::cin >> X;

    (X % 2 == 0) ? X += 1 : L += 1;

    for(int i = 0; i <= L; i++, X += 2)
        std::cout << X << std::endl;

    return 0;
}