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
    int n;
    cin>>n;
    n--;
    int x=log2(n);//cout<<x<<nl;
    x=pow(2,x);
    int ans=0,y=n-x;
    fi(i,x,n){
        cout<<i<<" ";
    }cout<<y<<" ";
    fi(i,0,x-1){
        if(i==y) continue;
        cout<<i<<" ";
    }
    cout<<nl;

}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}

