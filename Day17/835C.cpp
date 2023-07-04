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
    ll n;
    cin>>n;
    ll a[n];
    ll b[n];
    fi(i,0,n){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    ll mx1 =b[n-1];
    ll mx2 =b[n-2];
    ll ans=0;
    vector<ll>v;
    fi(i,0,n){
        if(a[i]!=mx1){
            ans = a[i]-mx1;
        }
        else {
            ans = a[i]-mx2;
        }
        v.pb(ans);

    }


    for(auto x: v){
        cout<<x<<" ";
    }
    cout<<nl;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}



