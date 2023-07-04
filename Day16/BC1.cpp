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
ll binary_fun(ll a[], ll n, ll h){
    ll l=1,r=h;
    ll ans;
    while(l<=r){
        ll mid = (l+r)/2;
        ans = mid;
        fi(i,0,n-1){
            ans+=min(mid,(a[i+1]-a[i]));
        }
        if(ans<h) l = mid+1;
        else r=mid-1;
    }
    return r+1;
}
void solve(){
    ll n,h;
    cin>>n>>h;
    ll a[n];
    fi(i,0,n)cin>>a[i];
    ll res = binary_fun(a,n,h);
    pr(res);
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}
