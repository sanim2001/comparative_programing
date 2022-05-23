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
    ll n,p=0,q=0,mid=0;
    cin>>n;
    ll a[n],b[n];
    fi(i,0,n) cin>>a[i];
    fi(i,0,n) b[i]=a[i];
    if(n==1){
       cout<<1<<" "<<1<<nl;
       return;
    }
    sort(b,b+n);
    ll maxx =0;
    ll minn =0;
    fi(i,0,n){
        if(b[0]==a[i]){
            minn = i+1;
            break;
        }
    }
    fi(i,0,n){
        if(b[n-1]==a[i]){
            maxx=i+1;
            break;
        }
    }
    cout<<minn<<" "<<maxx<<nl;

}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}


