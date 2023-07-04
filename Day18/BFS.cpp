#include<bits/stdc++.h>
#define     pb                push_back
#define     all(x)            x.begin(),x.end()
#define     fi(i,a,b)         for(ll i=a;i<b;i++)
#define     ri(i,b,a)         for(ll i=b;i>=a;i--)
#define     yes               cout<<"YES\n"
#define     no                cout<<"NO\n"
#define     nl                "\n"
#define     deb(x)            cerr<<(#x)<<" = "<<x<<"\n"
#define     mod               1000000007
#define     pr(x)             cout<<x<<"\n"
#define     out(a)            for(auto &x : a) cout<<x<<" "
typedef long long int ll;
typedef long double ld;
using namespace std;
//transform(s.begin(), s.end(), s.begin(), ::tolower);

const int N = 1e5+7;
vector<int>g[N];
int v[N];
int level[N];

void bfs(int s){
    queue<int> q;
    q.push(s);
    v[s]=1;
    while(!q.empty()){
        int curr = q.front();
        q.pop();
        cout<<curr<<" ";
        for(int child:g[curr]){
            if(!v[child]){
                q.push(child);
                v[child] = 1;
                level[child] = level[curr]+1;
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    fi(i,0,n){
        int x,y;
        cin>>x>>y;
        g[x].pb(y);
        g[y].pb(x);
    }
    bfs(1);
    fi(i,1,n+1)cout<<level[i]<<nl;
}



