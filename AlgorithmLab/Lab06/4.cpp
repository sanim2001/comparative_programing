#include<bits/stdc++.h>
using namespace std;

vector<int>vt[2000050];
#define MOD   1000000007
int vis[2000050], dis[2000050], p[2000050];

void bfs(int x){

    queue<int>q;
    q.push(x);
    vis[x]=1, dis[x]=0, p[x]=1;

    while(!q.empty()){
        int u=q.front();

        q.pop();
        for(int i=0; i<vt[u].size(); i++){
            int v=vt[u][i];
            if(!vis[v])
            {
                vis[v]=1;
                q.push(v);
            }
            if (dis[v] > dis[u] + 1)
            {
                dis[v] = dis[u] + 1;
                p[v] = p[u]%MOD;
            }


            else if (dis[v] == dis[u] + 1)
                p[v] = (p[v] + p[u])%MOD;
        }
    }
}

int main()
{
    int n,m;
    cin>>n>>m;

    int a,b;
    for(int i=1; i<=m; i++){
        cin>>a>>b;
        vt[a].push_back(b);
        vt[b].push_back(a);
    }
    for(int i=1; i<=n; i++)
        dis[i]=INT_MAX;
    bfs(1);
    int ans=0;
    for(int i=0; i<=m; i++)
    {
        if(p[i]>1)
        {
            ans=1;
            break;
        }
    }
    if(ans==1){
        cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
    return 0;
}
