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
typedef long long int ll;
typedef long double ld;
using namespace std;
ll gcd (ll a, ll b) { return b ? gcd (b, a % b) : a;}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
//transform(s.begin(), s.end(), s.begin(), ::tolower);

ll sum(ll n){
    ll s =0;
    while(n>0){
        s+=n%10;
        n/=10;
    }
    return s;

}
void solve(){
    ll n;
    cin>>n;
    ll c1 = (n+1)/2, c2 =n/2;

    if(n==1){
        cout<<1<<" "<<0<<nl;
        return;
    }
    ll x = 0;
    while(abs(sum(c1)-sum(c2))>1 && c1<=n){
        x = abs(sum(c1)-sum(c2));
        c1+=x/2;
        c2-=x/2;

    }
    cout<<c1<<" "<<c2<<nl;

}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }

}



