#include <iostream>

int main() {
    int hi, hf, mi, mf, hr, mr;

    std::cin >> hi >> mi >> hf >> mf;

    (hi >= hf) ? hr = 24 - hi + hf : hr = hf - hi; 
    (mi == mf) ? mr = 0 : (mi > mf) ? mr = 60 - mi + mf, --hr : mr = mf - mi;
    (hi == hf && mi < mf) ? hr = 0 : hr = hr;

    std::cout << "O JOGO DUROU " << hr << " HORA(S) E " << mr << " MINUTO(S)" << std::endl;

    return 0;
}