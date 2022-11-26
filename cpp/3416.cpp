#include <iostream>

int main() {
    int N, L, D, answer, coffe;

    std::cin >> N >> L >> D;

    L *= 1000;

    coffe = N * D; 

    answer = coffe / L;

    if (coffe % L != 0) {
        answer += 1;
    }

    std::cout << answer * (L / 1000) << std::endl;

    return 0;
}
