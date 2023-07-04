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
int d=0,leaf=0;

void dfs(int n,int k,int dep){
        for(auto x1:g[n]){
            if(x1!=k){
                dfs(x1,n,dep+1);
            }
        }
        if(dep>d) d = dep,leaf =n,deb(d),deb(leaf);
}

void solve(){
    int n,x,y;
    cin>>n;
    fi(i,0,n-1){
        cin>>x>>y;
        g[x].pb(y);
        g[y].pb(x);
    }
    dfs(1,0,0);
    dfs(leaf,0,0);
    pr(d);
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }

}



