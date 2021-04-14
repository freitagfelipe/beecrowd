#include <iostream>

int main(){
    int N;

    std::cin >> N;

    for(int i = 0, X = 1, Y = 2, Z = 3; i < N; i++, X+=4, Y+=4, Z+=4)
        std::cout << X << " " << Y << " " << Z << " PUM" << std::endl;

    return 0;
}