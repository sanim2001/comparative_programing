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
    ll n,flag=0;
    cin>>n;
    ll a[n];
    fi(i,0,n) cin>>a[i];
    ll x=0,y=0;
    fi(i,1,n-1){
        if(a[i]%2==1){
            x++;
        }
        y+=a[i]/2;
    }
    if(n==3 && a[1]%2==1) cout<<-1<<nl;
    else if(y==0) cout<<-1<<nl;
    else{
        cout<<x+y<<nl;
    }

}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}




