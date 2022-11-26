#include <iostream>

int main() {
    int a, n, resp = 0;

    std::cin >> a;

    while(1) {
        std::cin >> n;
        
        if(n > 0)
            break;
    }

    for(int i = 0; i <= n - 1; i++)
        resp += a + i;
    
    std::cout << resp << std::endl;

    return 0;
}