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
#define     mod               1000000007
#define     pr(x)             cout<<x<<"\n"
typedef long long int ll;
typedef long double ld;
using namespace std;
ll gcd (ll a, ll b) { return b ? gcd (b, a % b) : a;}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
//transform(s.begin(), s.end(), s.begin(), ::tolower);

void solve(){
    int n=3;
    ll a[n];
    fi(i,0,n)cin>>a[i];

    ll m1 = (a[0]+a[1])*a[2];
    ll m2 = (a[2]*a[1])*a[0];
    ll m3 = a[0]+(a[1]*a[2]);
    ll m4 = a[0]*(a[1]+a[2]);
    ll m5 = a[0]+a[1]+a[2];
    ll mx = max(m1,max(m2,max(m3,max(m4,m5))));
    pr(mx);
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }

}



