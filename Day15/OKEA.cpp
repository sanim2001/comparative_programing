#include<bits/stdc++.h>
#define     f                 first
#define     s                 second
#define     pb                push_back
#define     all(x)            x.begin(),x.end()
#define     fi(i,a,b)         for(int i=a;i<=b;i++)
#define     ri(i,b,a)         for(int i=b;i>=a;i--)
#define     N                 (int)(1e9 + 7)
#define     yes               cout<<"YES\n"
#define     no                cout<<"NO\n"
#define     nl                "\n"
#define     deb(x)            cerr<<(#x)<<" = "<<x<<"\n"
#define    mod             1000000007
typedef long long ll;
typedef long double ld;
using namespace std;
ll gcd (ll a, ll b) {
    return b ? gcd (b, a % b) : a;
}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
void solve(){
    int n,k;
    cin>>n>>k;
    if(k==1){
        yes;
        fi(i,1,n) cout<<i<<nl;
        return;
    }
    if(n%2==1){
        no;
        return;
    }
    yes;
    int e=2,o=1;
    fi(i,1,n){
        if(i%2==1){
            fi(j,1,k) cout<<o<<" ",o+=2;
        }
        else{
            fi(j,1,k) cout<<e<<" ",e+=2;
        }
        cout<<nl;
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



