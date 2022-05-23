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
    double x1,p1,x2,p2;
    cin>>x1>>p1>>x2>>p2;
    while(x1>1){
        x1/=10;
        p1++;
    }
    while(x2>1){
        x2/=10;
        p2++;
    }
    if(p1>p2) cout<<">"<<nl;
    else if(p1<p2) cout<<"<"<<nl;
    else{
        if(x1>x2) cout<<">"<<nl;
        else if(x1<x2) cout<<"<"<<nl;
        else cout<<"="<<nl;
    }

}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }

}


