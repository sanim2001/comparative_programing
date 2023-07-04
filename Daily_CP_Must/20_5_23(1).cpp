#include<bits/stdc++.h>
#define     pb                push_back
#define     all(x)            x.begin(),x.end()
#define     fi(i,a,b)         for(ll i=a;i<b;i++)
#define     ri(i,b,a)         for(ll i=b;i>=a;i--)
#define     N                 (int)(1e9 + 7)
#define     yes               cout<<"YES\n"
#define     no                cout<<"NO\n"
#define     nl                "\n"
#define     deb(x)            cerr<<(#x)<<" = "<<x<<"\n"
#define     pr(x)             cout<<x<<"\n"
#define     out(a)            for(auto &x : a) cout<<x<<" "
#define     ll                long long int
#define     ld                long double
#define     trans(s)          transform(s.begin(), s.end(), s.begin(), ::tolower);
#define     gcd(a,b) __gcd(a,b)
#define     lcm(a,b) (a*(b/gcd(a,b)))
using namespace std;
const long long mod = 1e9 + 7;
int dx[]={-1,1,0,0,-1,-1,1,1};
int dy[]={0,0,-1,1,-1,+1,-1,1};


vector<int>g[200005];
int app[200005]={0};
int x,y;

void dfs(int node, int l=-1){
    if(g[node]==1 && node!=1)app[node]=1;
    for(auto x1: g[node]){
        if(x1!=l){
            dfs(x1,node);
            app[node]+=app[x1];
        }
    }
}
void solve(){
    int n;
    cin>>n;
    fi(i,0,n-1){
        cin>>x>>y;
        g[x].pb(y);
        g[y].pb(x);
    }
    dfs(1,0);
    int n1;
    cin>>n1;
    fi(i,0,n1){
        cin>>x>>y;
        pr(app[x]*app[y]);
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }

}



