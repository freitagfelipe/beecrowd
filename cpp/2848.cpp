#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, q;

    cin >> n >> q;

    vector<int> v(n);

    for (int i {}; i < n; ++i) {
        cin >> v[i];
    }

    for (int i {}; i < q; ++i) {
        int l, r, k, g, d;

        cin >> l >> r >> k >> g >> d;

        vector<int> aux(v.begin() + l - 1, v.begin() + r);

        sort(aux.begin(), aux.end());

        int kesimo {aux[k - 1]};

        long int c {count(aux.begin(), aux.end(), kesimo)};
        
        long int diffd {abs(c - d)}, diffg {abs(c - g)};

        if (c == d && c == g || diffd == diffg) {
            cout << kesimo << " " << c << " E\n";
        } else if (c == g || diffd > diffg) {
            cout << kesimo << " " << c << " G\n";
        } else if (c == d || diffd < diffg) {
            cout << kesimo << " " << c << " D\n";
        }
    }

    return 0;
}
