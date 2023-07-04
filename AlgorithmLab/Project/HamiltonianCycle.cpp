/*
5 7
0 1
0 3
1 2
1 3
1 4
2 4
3 4

*/
#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5;

int N, E;
vector<int> G[MAX];
int path[MAX];

bool check(int v, int pos) {
    bool mk = false;
    int u = path[pos - 1]; ///previous node
    for (int i = 0; i < G[u].size(); i++) {
        if (G[u][i] == v)
            mk = true; /// connected with previous node
    }
    if (mk == false)
        return false; /// not connected with previous node

    for (int i = 0; i < pos; i++)
        if (path[i] == v) /// v is taken multiple times
            return false;

    return true;
}

bool hamiltonianCycle(int pos) {
    if (pos == N) {
        bool mk = false;
        int u = path[pos - 1]; ///last node
        for (int i = 0; i < G[u].size(); i++) {
            if (G[u][i] == 0)
                mk = true; /// 0 is connected with last node
        }
        return mk; /// returns if last node is connected with 0
    }

    for (int v = 0; v < N; v++) {
        if (check(v, pos)) {
            path[pos] = v;
            if (hamiltonianCycle(pos + 1))
                return true;
            path[pos] = -1;
        }
    }
    return false;
}
int main() {
    cin >> N >> E;
    for (int i = 0; i < E; i++)
        path[i] = -1;
    path[0] = 0;

    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }

    if (hamiltonianCycle(1)){
        cout << "YES\n";
        for (int i = 0; i < N; i++)
            cout << path[i] << " ";

        cout << path[0] <<endl;
    }
    else
        cout << "NO\n";
}
