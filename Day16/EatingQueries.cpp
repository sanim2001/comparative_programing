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
    ll n,q;
    cin>>n>>q;
    ll a[n];
    fi(i,0,n) cin>>a[i];
    sort(a,a+n);
    reverse(a,a+n);
    ll sum=0;
    vector<ll>vec;
    fi(i,0,n){
        sum+=a[i];
        vec.pb(sum);
    }
    ll b;
    fi(i,0,q){
        cin>>b;
        if(b>sum){
            pr(-1);
            continue;
        }
        vector<ll>::iterator iter = lower_bound(all(vec),b);
        pr(iter-vec.begin()+1);
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}



