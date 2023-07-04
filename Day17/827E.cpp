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
    int n,q;
    cin>>n>>q;
    ll a[n+1],b[q+1];
    vector<ll>pre(n+1);
    pre[0] = 0;
    a[0] = 0;
    fi(i,1,n+1){
        cin>>a[i];
    }
    ll sum =0;
    fi(i,1,n+1){
        pre[i] = max(pre[i-1],a[i]);
        sum+=a[i];
        a[i] = sum;
    }
    fi(i,0,q){
        cin>>b[i];
    }
    fi(i,0,q){
        int s = upper_bound(all(pre),b[i])-pre.begin()-1;
        cout<<a[s]<<" ";
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



