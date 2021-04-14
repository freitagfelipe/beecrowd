#include <iostream>

int main(){
    int n;
    
    std::cin >> n;

    for(int i = 0, x, y; i < n; i++){
        int r = 0;

        std::cin >> x >> y;

        (x % 2 == 0) ? x++ : x+=0;
        
        for(int z = 0; z < y; z++, x+=2)
            r+=x;

        std::cout << r << std::endl;
    }

    return 0;
}