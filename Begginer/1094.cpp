#include <iostream>
#include <iomanip>

int main(){
    int N;
    double Q, T, A[3] = {0, 0, 0};
    char R;

    std::cin >> N;

    for(int i = 0; i < N; i++){
        std::cin >> Q >> R;
        (R == 'C') ? A[0]+=Q, T+=Q : A[0]+=0;
        (R == 'R') ? A[1]+=Q, T+=Q : A[1]+=0;
        (R == 'S') ? A[2]+=Q, T+=Q : A[2]+=0;
    }

    std::cout << "Total: " << T << " cobaias" << "\nTotal de coelhos: " << A[0] << "\nTotal de ratos: " << A[1] << "\nTotal de sapos: " << A[2] << std::fixed << std::setprecision(2) << "\nPercentual de coelhos: " << (A[0]/T) * 100 << " %\nPercentual de ratos: " << (A[1]/T) * 100 << " %\nPercentual de sapos: " << (A[2]/T) * 100 << " %" << std::endl;

    return 0;
}