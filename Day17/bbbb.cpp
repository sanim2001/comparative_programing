#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,m,x,y,d;
    cin >>n>>m>>x>>y>>d;

    if((y - d < 2  || x + d >= n) && (y + d >= m || x - d < 2)) {
        cout << "-1\n";
    }
    else {
        cout << n + m - 2 << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
