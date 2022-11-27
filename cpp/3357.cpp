#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    double l, q;

    cin >> n >> l >> q;

    vector<string> v(n);

    for (int i {}; i < n; ++i) {
        cin >> v[i];
    }

    int r {};

    while (l > q) {
        l -= q;

        r += 1;
    }

    cout << v[r % n] << " " << l << '\n';

    return 0;
}
