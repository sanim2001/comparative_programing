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
    ll n,m;
    cin>>n>>m;
    string s[n];
    fi(i,0,n) cin>>s[i];
    bool is = false;
    fi(i,0,n-1){
        fi(j,0,m-1){
            if(s[i][j]-'0' +s[i+1][j]-'0' +s[i][j+1]-'0' +s[i+1][j+1]-'0' ==3)
                is=true;
        }
    }
    if(!is) yes;
    else no;

}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}


