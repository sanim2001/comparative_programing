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
typedef long long ll;
typedef long double ld;
using namespace std;
ll gcd (ll a, ll b) { return b ? gcd (b, a % b) : a;}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
//transform(s.begin(), s.end(), s.begin(), ::tolower);


void solve(){
    ll n,m;
    cin>>n>>m;
    ll a[n],b[m];
    fi(i,0,n){
        cin>>a[i];
    }
    fi(i,0,m){
        cin>>b[i];
    }
    ll minn = *max_element(a,a+n);

    int flag =0;
    fi(i,0,m){
        //fi(j,0,m){
            if(a[b[i]-1]==minn){
               cout<<"Yes\n";
               return;
            }
        //}
    }
    cout<<"No\n";
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }

}
