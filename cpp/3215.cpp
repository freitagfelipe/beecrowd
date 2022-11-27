#include <iostream>
#include <vector>

using namespace std;

#define MAXN int(1e4)

int v[MAXN + 10];
bool visited[MAXN + 10];

int dfs(vector<int> g[], int i) {
    visited[i] = true;

    int val {v[i]};

    for (int n : g[i]) {
        if (!visited[n]) {
            val += dfs(g, n);
        }
    }

    return val;
}

int main() {
    int n, m;

    cin >> n >> m;

    for (int i {}; i < n; ++i) {
        cin >> v[i];
    }

    vector<int> g[n];

    for (int i {}; i < m; ++i) {
        int x, y;

        cin >> x >> y;

        g[x].push_back(y);
        g[y].push_back(x);
    }

    for (int i {}; i < n; ++i) {
        if (!visited[i]) {
            int ans {dfs(g, i)};

            if (ans != 0) {
                cout << "IMPOSSIBLE\n";

                return 0;
            }
        }
    }

    cout << "POSSIBLE\n";

    return 0;
}
