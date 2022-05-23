#include<bits/stdc++.h>
#define     f                 first
#define     s                 second
#define     pb                push_back
#define     all(x)            x.begin(),x.end()
#define     fi(i,a,b)         for(int i=a;i<b;i++)
#define     ri(i,b,a)         for(int i=b;i>=a;i--)
#define     N                 (int)(1e9 + 7)
#define     gcd(a,b)          __gcd(a,b)
#define     yes               cout<<"YES\n"
#define     no                cout<<"NO\n"
#define     nl                "\n"
typedef long long ll;
typedef long double ld;
using namespace std;
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    fi(i,0,n) cin>>a[i];
    vector<int> v1,v2,even,odd;
    fi(i,0,n){
        if(a[i]%2) v1.pb(a[i]),odd.pb(a[i]);
        else v2.pb(a[i]),even.pb(a[i]);
    }
    sort(all(v1));
    sort(all(v2));
    if(v1==odd && v2==even) yes;
    else no;


}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}




