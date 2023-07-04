#include<bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
using namespace std;
#define     N                 (int)(1e5 + 7)

vector<int>g[N];
int v[N];
int level[N];

void bfs(int source){
    queue<int>q;
    q.push(source);
    v[source] =1;

    while(!q.empty()){
        int  cur_v = q.front();
        q.pop();
        cout<<cur_v<<" ";
        for(int child : g[cur_v] ){
            if(!v[child]){
                q.push(child);
                v[child] =1;
                level[child] = level[cur_v]+1;
            }
        }
    }


}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    bfs(1);
    for(int i=1; i<=n; i++){
        cout<<i<<" : "<<level[i]<<endl;
    }

}

