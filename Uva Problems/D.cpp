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
typedef long long int ll;
typedef long double ld;
using namespace std;
//transform(s.begin(), s.end(), s.begin(), ::tolower);

void solve(){
    ll n,m;
    cin>>n>>m;
    ll a[n];
    fi(i,0,n)cin>>a[i];
    vector<ll>p(n),v(n,0);
    ll sum = accumulate(a,a+n,0LL);
    p[0]=0;
    fi(i,1,n){
        p[i]=p[i-1]+a[i];
    }
    int x,y,z;
    fi(i,0,m){
        cin>>x>>y>>z;
        ll ans = sum- p[y-1]-p[x-1]-a[x-1];
        ans+=(y-x+1)*z;
        if(ans%2==0)no;
        else yes;
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



