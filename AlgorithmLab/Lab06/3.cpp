#include<bits/stdc++.h>
using  namespace  std;

int mx=INT_MIN;
int nd;
int vis[10000],dis[10000];

vector<int>v[10000];
void dfs(int node,int d){

    vis[node]=1;
    dis[node]=d;
    if(dis[node]>mx){

        mx=dis[node];
        nd=node;
    }
    for(int child: v[node]){

        if(vis[child]==0)
        {
            dfs(child,dis[node]+1);
        }
    }
}

int main(){

    int n,m,x,y;
    cin>>n>>m;
    while(m--)
    {
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    dfs(1,0);

    mx=-1;
    for(int i=1; i<=n; i++){
        vis[i]=0;
    }
    dfs(nd,0);
    cout<<mx<<endl;
    return 0;
}
