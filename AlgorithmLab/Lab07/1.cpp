#include <bits/stdc++.h>
using namespace std;
#define MAX 10000009
vector<int>V[100],v1;
int color[MAX],d[MAX],f[MAX],prev1[MAX];
int white=0,grey=1,black=2,inf=100007,c=0,s=-1,e;

void DFS(int u){
    int x;
    color[u] = grey;
    c++;
    d[u] = c;

    for(int j=0;j<V[u].size();j++){
        x = V[u][j];
        if(color[x]==white){
            prev1[x] = u;
            DFS(x);
        }
        else if(color[x] == grey && x!=prev1[u]){
            s = u;
            e = x;
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


    for(int i=1;i<=node;i++)
    {
        color[i]=white;
        prev1[i] = inf;
        d[i] = inf;
        f[i] = inf;
    }

    for(int i=1;i<=node;i++)
    {
        if(color[i]==white)
        {
            DFS(i);
        }
    }
    if(s!=-1)
    {
        cout<<"YES"<<endl;
        v1.push_back(s);
        while(e<s)
        {
            v1.push_back(prev1[s]);
            s = prev1[s];
        }
        sort(v1.begin(),v1.end());
        for(int i=0;i<v1.size();i++)
        {
            cout<<v1[i]<<" ";
        }
    }
    else
    {
        cout<<"No";
    }
}




