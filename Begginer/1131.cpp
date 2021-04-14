#include <iostream>

int main(){
    int gi, gg, ng = 1, vi = 0, vg = 0, qe = 0, qg = 0;
    std::string vencedor;

    while(ng == 1){
        std::cin >> gi >> gg;
        std::cout << "Novo grenal (1-sim 2-nao)\n";
        std::cin >> ng;
        (gi > gg) ? vi++ : (gg > gi) ? vg++ : qe++;
        qg++;
    }

    (vi > vg) ? vencedor = "\nInter venceu mais" : (vg > vi) ? vencedor = "\nGremio venceu mais" : vencedor = "\nNao houve vencedor";
    
    std::cout << qg << " grenais\n" << "Inter:" << vi << "\nGremio:" << vg << "\nEmpates:" << qe << vencedor << std::endl;

    return 0;
}