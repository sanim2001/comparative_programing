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

void solve(){
    string s;
    cin>>s;
    ll n= s.size();
    if(s=="1"||s=="4"||s=="78")pr("+");
    else if(s[n-1]=='5' && s[n-2]=='3')pr("-");
    else if(s[0]=='9' && s[n-1]=='4')pr("*");
    else if(s[0]=='1' && s[1]=='9'&& s[2]=='0')pr("?");
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}


