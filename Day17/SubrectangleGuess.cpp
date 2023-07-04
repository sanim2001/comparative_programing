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

void solve(){
    ll n,m;
    cin>>n>>m;
    ll a[n][m];
    ll mx = INT_MIN;
    fi(i,0,n){
        fi(j,0,m){
            cin>>a[i][j];
            mx= max(mx,a[i][j]);
        }
    }
    ll h=0,w=0;
    fi(i,0,n){
        fi(j,0,m){
            if(mx==a[i][j]){
                h=i+1;
                w=j+1;
            }
        }
    }
    h = max(h,n-h+1);
    w = max(w,m-w+1);
    pr(h*w);

}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}



