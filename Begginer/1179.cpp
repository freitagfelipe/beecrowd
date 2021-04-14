#include <iostream>

int main(){
    int p[5], i[5];

    for(int x, y = 0, cp = 0, ci = 0; y < 15; y++){
        std::cin >> x;
        if(x % 2 == 0){
            p[cp] = x;
            cp++;
        }else{
            i[ci] = x;
            ci++;
        }

        if(cp == 5){
            for (int z = 0; z < 5; z++){
                std::cout << "par[" << z << "] = " << p[z] << std::endl;
                p[z] = 0;
            }

            cp = 0;
        }else if(ci == 5){
            for(int z = 0; z < 5; z++){
                std::cout << "impar[" << z << "] = " << i[z] << std::endl;
                i[z] = 0;
            }

            ci = 0;
        }
    }

    for(int y = 0; y < 5; y++)
        if(i[y] != 0)
            std::cout << "impar[" << y << "] = " << i[y] << std::endl;

    for(int y = 0; y < 5; y++)
        if(p[y] != 0)
            std::cout << "par[" << y << "] = " << p[y] << std::endl;

    return 0;
}