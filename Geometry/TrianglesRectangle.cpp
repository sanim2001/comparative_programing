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
typedef long long ll;
typedef long double ld;
using namespace std;
ll gcd (ll a, ll b) {
    return b ? gcd (b, a % b) : a;
}
void solve(){
    ll w,h,d,x;
    cin>>w>>h;
    ll n,mx=LONG_LONG_MIN;
    fi(i,0,4){
        cin>>n;
        d=0;
        fi(j,0,n){
            cin>>x;
            if(j==0) d=x;
            else if(j==n-1) d=x-d;
        }
        if(i<2) d*=h;
        else d*=w;
        mx = max(mx,d);
    }
    cout<<mx<<nl;

}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}



