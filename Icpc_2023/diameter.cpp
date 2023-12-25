#include<bits/stdc++.h>
#define     pb                push_back
#define     all(x)            x.begin(),x.end()
#define     fi(i,a,b)         for(int i=a;i<b;i++)
#define     ri(i,b,a)         for(int i=b;i>=a;i--)
#define     N                 (int)(1e9 + 7)
#define     yes               cout<<"YES\n"
#define     no                cout<<"NO\n"
#define     nl                "\n"
#define     deb(x)            cerr<<(#x)<<" = "<<x<<"\n"
#define     pr(x)             cout<<x<<"\n"
#define     trans(s)          transform(s.begin(), s.end(), s.begin(), ::tolower);
#define     out(a)            for(auto &x : a) cout<<x<<" "
typedef long long int ll;
typedef long double ld;
using namespace std;
ll gcd (ll a, ll b) { return b ? gcd (b, a % b) : a;}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}

const long long mod = 1e9 + 7;
int dx[]={-1,1,0,0,-1,-1,1,1};
int dy[]={0,0,-1,1,-1,+1,-1,1};
void init_code(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
int n,m,x,y,ans;

vector<int> v,g[200005];
int d =0, leaf = 0;
void dfs(int n, int parent, int cur){
	if(cur>m){
        return;
    }
    bool ok=1;
    for(auto x1: g[n]){
		if(x1!=parent){
            ok=0;
			dfs(x1,n,((cur*v[x1-1])+v[x1-1]));
		}
	}
	ans+=ok;
}
void solve(){
	
	cin>>n>>m;
    v.resize(n);
    fi(i,0,n)cin>>v[i];
    fi(i,1,n){
    	cin>>x>>y;
    	g[x].pb(y);
    	g[y].pb(x);
    }

    dfs(1,0,v[0]);
    pr(ans);
}

int main(){
    init_code();
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }

}


