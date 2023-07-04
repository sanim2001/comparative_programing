#include<bits/stdc++.h>
#define     f                 first
#define     s                 second
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
typedef long long ll;
typedef long double ld;
using namespace std;
ll gcd (ll a, ll b) {
    return b ? gcd (b, a % b) : a;
}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
void solve(){
    ll n,m;
    cin>>n;
    ll a[n];
    fi(i,0,n) cin>>a[i];
    cin>>m;
    ll b[m];
    fi(i,0,m) cin>>b[i];

    ll max_alice = *max_element(a,a+n);//6
    ll max_bob = *max_element(b,b+m);//8
    if(max_alice>=max_bob) cout<<"Alice"<<nl;
    else cout<<"Bob"<<nl;
    if(max_alice<=max_bob) cout<<"Bob"<<nl;
    else cout<<"Alice"<<nl;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}


