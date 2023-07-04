#include <bits/stdc++.h>
using namespace std;
#define MAX 10000009
vector<int>V[100],v1;
int color[MAX],d[MAX],f[MAX],prev1[100000];
int white=0,grey=1,black=2,inf=10000;
int mx=-1,col,c=0;
void DFS(int u){
    int x;
    color[u] = grey;
    c++;
    d[u] = c;
    int sz  = V[u].size();
    for(int j=0;j<sz;j++)
    {
        x = V[u][j];
        if(color[x]==white)
        {
            col++;
            prev1[x] = u;
            DFS(x);
        }
        if(col>mx)
        {
            mx =col;
        }
    }
    color[u] = black;
    c++;
    f[u] = c;
}


int main()
{
    int node,edge,u,v,j;
    cin>>node>>edge;
    for(int i=1;i<=edge;i++)
    {
        cin>>u>>v;
        if(u==v)
        {
            V[u].push_back(v);
        }
        else
        {
            V[u].push_back(v);
            V[v].push_back(u);
        }
    }

    for(int i=1;i<=node;i++){
        color[i]=white;
        prev1[i] = inf;
        d[i] = inf;
        f[i] = inf;
    }

    for(int i=1;i<=node;i++){
        if(color[i]==white)
        {
            col=0;
            DFS(i);
        }
    }

    cout<<mx+1<<endl;
}





