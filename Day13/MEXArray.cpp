#include<bits/stdc++.h>
#define     f                 first
#define     s                 second
#define     pb                push_back
#define     all(x)            x.begin(),x.end()
#define     fi(i,a,b)         for(int i=a;i<=b;i++)
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
    fi(i,1,n) cin>>a[i];
    ll x=n;
    fi(i,1,n){
        flag+=i*x;
        x--;
    }
    fi(i,1,n){
        if(a[i]==0){
            int ind=(n-i)+1;
            flag+=ind*i;
        }
    }
    cout<<flag<<nl;

}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}



