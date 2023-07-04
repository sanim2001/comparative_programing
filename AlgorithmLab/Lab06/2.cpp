#include<bits/stdc++.h>
using namespace std;


vector<vector<int> > graph;
vector<int> color;
bool vis[100011];

int n;
bool isBicolorable(){

    color[0] = 1;
    queue <int> q;
    q.push(0);
    while (!q.empty())
    {
        int temp = q.front();
        q.pop();
        for (int i=0; i<n; i++)
        {
            if (graph[temp][i] && color[i] == -1)
            {
                color[i] = 1 - color[temp];
                q.push(i);
            }
            else if (graph[temp][i] && color[i] == color[temp])
                return 0;
        }
    }
    return 1;
}

int main(){

    int x,y,m;
    cin>>n>>m;

    memset(vis,0,sizeof(vis));
    graph.resize(n);
    color.resize(n,-1);
    for(int i=0; i<n; i++){
        graph[i].resize(n);
    }

    for(int i=0; i<m; i++){
        cin>>x>>y;
        x--,y--;
        graph[x][y]=1;
        graph[y][x]=1;
    }
    if(isBicolorable()){
        cout<<"Yes"<<endl;
    }

    else{
        cout<<"No"<<endl;
    }

    return 0;
}
