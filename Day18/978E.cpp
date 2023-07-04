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
#define     mod               1000000007
#define     pr(x)             cout<<x<<"\n"
#define     out(a)            for(auto &x : a) cout<<x<<" "
typedef long long int ll;
typedef long double ld;
using namespace std;
//transform(s.begin(), s.end(), s.begin(), ::tolower);

void solve(){
    int n,m;
    cin>>n>>m;
    ll a[n];
    fi(i,0,n)cin>>a[i];
    ll mx=0,mn=0,pass=0;
    fi(i,0,n){
        pass+=a[i];
        mn = min(mn,pass);
        mx = max(mx,pass);
    }
    ll ans = m-(mx-mn-1);
    pr(max(0LL,ans));
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }

}



