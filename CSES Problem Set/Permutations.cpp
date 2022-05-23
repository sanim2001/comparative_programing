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
ll gcd (ll a, ll b) {
    return b ? gcd (b, a % b) : a;
}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
void solve(){

}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    ll n;
    cin>>n;
    if(n==1){
        cout<<1;
        return 0;
    }
    if(n==1 || n==2 || n==3){
        cout<<"NO SOLUTION";
        return 0;
    }
    if(n%2==0){
        for(int i=2; i<=n; i+=2) cout<<i<<" ";
        for(int i=1; i<=n; i+=2) cout<<i<<" ";
    }else{
        for(int i=n-1; i>0; i-=2) cout<<i<<" ";
        for(int i=n; i>0; i-=2) cout<<i<<" ";
    }



}





