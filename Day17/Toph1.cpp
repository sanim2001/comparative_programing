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
/*
ll n;
    cin>>n;
    ll a[n];
    fi(i,0,n)cin>>a[i];
*/

void solve(){
    int n,m;
    cin>>n>>m;
    ll a[n],b[n];
    map<int,int>mp1;
    fi(i,0,n){
        cin>>a[i];
        mp1[a[i]]++;
    }
    fi(i,0,n){
        cin>>b[i];
        mp1[b[i]]++;
    }

    fi(i,0,n){
        if(mp1[i]%2!=0){
            yes;
            return;
        }
    }
    no;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }

}




