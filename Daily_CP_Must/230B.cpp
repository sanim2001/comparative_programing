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

bool isPrime(long long n){
    if(n<2)return false ;
    else if(n==2)return true;
    else if(n%2  ==0)return false;
    for(int i=3;i<=sqrt(n);i+=2)
    {
        if(n%i==0)return false;
    }
    return true;
}

void solve(){
    ll n;
    cin>>n;
    ll x;
    ll cnt;
    fi(i,0,n){
        cin>>x;
        cnt  = sqrt(x);
        if(cnt*cnt == x and isPrime(cnt)==true)yes;
        else no;
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t=1;
   // cin>>t;
    while(t--){
        solve();
    }

}




