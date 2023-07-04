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
    string a[8][8];
    for(int i=1;i<=8; i++){
        for(int j=1;j<=8; j++){
            cin>>a[i][j];
       }
    }
    for(int i=2;i<=7; i++){
        for(int j=2;j<=7; j++){
            if(a[i][j]=="#" and a[i-1][j-1]=="#"  and a[i-1][j+1] =="#" and a[i+1][j-1]=="#"  and a[i+1][j+1] =="#"){
                cout<<i<<" "<<j<<nl;
                return;
            }
            cout<<"Hello";
       }
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
