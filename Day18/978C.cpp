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
    ll n,m;
    cin>>n>>m;
    ll a[n],b[m];
    fi(i,0,n)cin>>a[i];
    fi(i,0,m)cin>>b[i];
    vector<ll>pre(n+1,0);
    fi(i,1,n+1){
        pre[i] = pre[i-1]+a[i-1];
    }
    ll x;
    fi(i,0,m){
        x= b[i];
        auto x1 = lower_bound(all(pre),x)-pre.begin();
        ll sum = abs(pre[x1-1]-b[i]);
        cout<<x1<<" "<<sum<<nl;;

    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t=1;
   // cin>>t;
    while(t--){
        solve();
    }

}



