#include <iostream>
#include <iomanip>

int main(){
    double x, y, z, resp;

    std::cin >> x;

    if(x >= 0 && x <= 2000)
        std::cout << "Isento" << std::endl;
    else{
        if(x >= 2000.01 && x <= 3000)
            resp = (x - 2000) * 0.08;
        else if(x >= 3000.01 && x <= 4500)
            resp = ((x - (x - 3000) - 2000) * 0.08) + ((x-3000) * 0.18);
        else
            resp = (1000 * 0.08) + (1500 * 0.18) + ((x - 4500) * 0.28);

        std::cout << std::fixed << std::setprecision(2) << "R$ " << resp << std::endl;
    }

    return 0;
}