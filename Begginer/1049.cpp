#include <iostream>

int main(){
    std::string P, S, T;

    std::cin >> P >> S >> T;

    if(P == "vertebrado"){
        if(S == "ave"){
            if(T == "carnivoro")
                std::cout << "aguia" << std::endl;
            else
                std::cout << "pomba" << std::endl;
        }else{
            if(T == "onivoro")
                std::cout << "homem" << std::endl;
            else 
                std::cout << "vaca" << std::endl;
        }
    }else{
        if(S == "inseto"){
            if(T == "hematofago")
                std::cout << "pulga" << std::endl;
            else
                std::cout << "lagarta" << std::endl;
        }else{
            if(T == "hematofago")
                std::cout << "sanguessuga" << std::endl;
            else
                std::cout << "minhoca" << std::endl;
        }
    }

    return 0;
}