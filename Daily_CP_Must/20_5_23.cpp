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
#define     pr(x)             cout<<x<<"\n"
#define     out(a)            for(auto &x : a) cout<<x<<" "
#define     ll                long long int
#define     ld                long double
#define     trans(s)          transform(s.begin(), s.end(), s.begin(), ::tolower);
using namespace std;
const long long mod = 1e9 + 7;
int dx[]={-1,1,0,0,-1,-1,1,1};
int dy[]={0,0,-1,1,-1,+1,-1,1};

void solve(){
    ll n;
    cin>>n;

    int a[n],b[n];
    fi(i,0,n)cin>>a[i];
    fi(i,0,n)cin>>b[i];
    sort(a,a+n);
    sort(b,b+n);
    ll ans=1LL;
    fi(i,0,n){
        int x = upper_bound(a,a+n,b[i])-a;
        pr(x);
        if(i<x){
            pr(0);
            return;
        }
        ll inx = i-x+1;
        ans =(ans*inx)%mod;
    }
    pr(ans);
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }

}



