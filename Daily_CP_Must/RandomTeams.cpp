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
    ll n,k;
    cin>>n>>k;
    if(k==1){
        ll mx = (n*(n-1))/2;
        cout<<mx<<" "<<mx<<nl;
        return;
    }

    ll mx = ((n-k+1)*(n-k))/2;
    ll ans1 = n/k, ans2 = n%k;
    ll res1 = (ans1*(ans1-1))/2;
    ll res2 = (ans1*(ans1+1))/2;
    ll mn = (res1*(k-ans2))+(ans2*res2);
    cout<<mn<<" "<<mx<<nl;

}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }

}



