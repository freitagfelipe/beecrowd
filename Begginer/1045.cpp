#include <iostream>
#include <cmath>

int main(){
    double A[3];

    for(int i = 0; i < 3; i++)
        std::cin >> A[i];

    for(int i = 0; i < 3; i++){
        for(int j = i+1; j < 3; j++){
            if(A[i] < A[j])
                std::swap(A[i], A[j]);
        }
    }

    if(A[0] >= A[1] + A[2])
        std::cout << "NAO FORMA TRIANGULO" << std::endl;
    else if(!(A[0] >= A[1] + A[2])){
        if(pow(A[0], 2) == pow(A[1], 2) + pow(A[2], 2))
            std::cout << "TRIANGULO RETANGULO" << std::endl;
        if(pow(A[0], 2) > pow(A[1], 2) + pow(A[2], 2))
            std::cout << "TRIANGULO OBTUSANGULO" << std::endl;
        if(pow(A[0], 2) < pow(A[1], 2) + pow(A[2], 2))
            std::cout << "TRIANGULO ACUTANGULO" << std::endl;
        if(A[0] == A[1] && A[0] == A[2])
            std::cout << "TRIANGULO EQUILATERO" << std::endl;
        else if(A[0] == A[1] || A[0] == A[2] || A[1] == A[2])
            std::cout << "TRIANGULO ISOSCELES" << std::endl;
    }

    return 0;
}