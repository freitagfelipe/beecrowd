#include <iostream>
#include <iomanip>

int main() {
    double A, B, C;

    std::cin >> A >> B >> C;
    
    if(A >= B + C || B >= A + C || C >= A + B)
        std::cout << std::fixed << std::setprecision(1) << "Area = " << (A + B) * C / 2 << std::endl;
    else
        std::cout << std::fixed << std::setprecision(1) << "Perimetro = " << A + B + C << std::endl;

    return 0;
}