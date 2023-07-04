#include <bits/stdc++.h>
using namespace std;
#define MAX 10000009
vector<int>V[100],v1;
int color[MAX],d[MAX],f[MAX],prev1[MAX];
int white=0,grey=1,black=2,inf=10000,col,c=0;

void DFS(int u){
    int x;
    color[u] = grey;
    c++;
    d[u] = c;

    for(int j=0;j<V[u].size();j++){
        x = V[u][j];
        if(color[x]==white)
        {
            col++;
            prev1[x] = u;
            DFS(x);
        }
    }
    color[u] = black;
    c++;
    f[u] = c;
    v1.push_back(u);
}


int main(){
    int node,edge,u,v;
    cin>>node>>edge;
    for(int i=1;i<=edge;i++){
        cin>>u>>v;
        if(u==v)
        {
            V[u].push_back(v);
        }
        else
        {
            V[u].push_back(v);
        }
    }
    for(int i=1;i<=node;i++){
        sort(V[i].begin(),V[i].end());
    }
    for(int i=1;i<=node;i++){
        color[i]=white;
        prev1[i] = inf;
        d[i] = inf;
        f[i] = inf;
    }
    for(int i=node;i>=1;i--){
        for(int j=V[i].size()-1;j>=0;j--)
        {
            if(color[V[i][j]]==white)
            {
                DFS(V[i][j]);
            }
        }
        if(color[i] == white)
        {
            DFS(i);
        }

    }
    for(int i=v1.size()-1;i>=0;i--){
        cout<<v1[i]<<endl;
    }
}


