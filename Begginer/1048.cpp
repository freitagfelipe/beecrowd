#include <iostream>
#include <iomanip>

int main() {
    double S, N, R;
    int P;

    std::cin >> S;

    (S >= 0 && S <= 400.00) ? P = 15 : P += 0;
    (S >= 400.01 && S <= 800.00) ? P = 12 : P += 0;
    (S >= 800.01 && S <= 1200.00) ? P = 10 : P += 0;
    (S >= 1200.01 && S <= 2000.00) ? P = 7 : P += 0;
    (S > 2000.00) ? P = 4 : P += 0;

    N = S + S * P / 100;
    R = N - S;

    std::cout << std::fixed << std::setprecision(2) << "Novo salario: " << N  << "\nReajuste ganho: " << R << "\nEm percentual: " << P << " %" << std::endl;

    return 0;
}