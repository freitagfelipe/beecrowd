#include <iostream>
#include <iomanip>

int main(){
    double N1, N2, N3, N4, EXAME, MEDIA, MEDIA2;

    std::cin >> N1 >> N2 >> N3 >> N4;
    MEDIA = (N1 * 2 + N2 * 3 + N3 * 4 + N4) / 10;
    std::cout << std::fixed << std::setprecision(1) << "Media: " << MEDIA << std::endl;
    
    if(MEDIA >= 7)
        std::cout << "Aluno aprovado." << std::endl;
    else if(MEDIA < 5)
        std::cout << "Aluno reprovado." << std::endl;
    else{
        std::cout << "Aluno em exame." << std::endl;
        std::cin >> EXAME;
        std::cout << "Nota do exame: " << EXAME << std::endl;
        MEDIA2 = (EXAME + MEDIA) / 2;

        if(MEDIA2 >= 5)
            std::cout << "Aluno aprovado." << std::endl;
        else 
            std::cout << "Aluno reprovado." << std::endl;
        std::cout << std::fixed << std::setprecision(1) << "Media final: " << MEDIA2 << std::endl;
    }

    return 0;
}