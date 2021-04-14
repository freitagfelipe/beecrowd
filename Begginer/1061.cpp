#include <iostream>

int main(){
    int d[2], t[6], tt;
    std::string l;

    for(int i = 0; i < 2; i++){
        std::cin >> l >> d[i];
        for(int y = 3 * i; y < 3 + (3 * i); y++){
            if(y == 2 || y == 5)
                std::cin >> t[y];
            else
                std::cin >> t[y] >> l;
        }
    }

    tt = (d[1] * 86400 + t[3] * 3600 + t[4] * 60 + t[5]) - (d[0] * 86400 + t[0] * 3600 + t[1] * 60 + t[2]);

    std::cout << tt / 86400 << " dia(s)\n" << (tt % 86400) / 3600 << " hora(s)\n" << ((tt % 86400) % 3600) / 60 << " minuto(s)\n" << ((tt % 86400) % 3600) % 60 << " segundo(s)" << std::endl;

    return 0;
}