#include <iostream>

int main(){
    for(int i = 1, j = 7, c = 5; i <= 9; j--){
        std::cout << "I=" << i << " J=" << j << std::endl;
        (j == c) ? i+=2, j = 7 + i, c+=2 : i+=0;
    }

    return 0;
}