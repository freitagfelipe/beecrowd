#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n;

    while (cin >> n) {
        int ans {};

        vector<string> v(n);

        for (int i {}; i < n; ++i) {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        for (int i {1}; i < n; ++i) {
            for (int j {}; j < v[i].size(); ++j) {
                if (v[i][j] == v[i - 1][j]) {
                    ++ans;
                } else {
                    break;
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
