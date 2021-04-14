#include <iostream>

int main(){
    for(int i = 1, j = 7; i < 10; j--){
        std::cout << "I=" << i << " J=" << j << std::endl;
        (j == 5) ? i+=2, j = 8 : i+=0;
    }

    return 0;
}