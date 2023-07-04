#include<bits/stdc++.h>
#define     pb                push_back
#define     all(x)            x.begin(),x.end()
#define     fi(i,a,b)         for(ll i=a;i<b;i++)
#define     ri(i,b,a)         for(ll i=b;i>=a;i--)
#define     N                 (int)(1e9 + 7)
#define     yes               cout<<"YES\n"
#define     no                cout<<"NO\n"
#define     nl                "\n"
#define     deb(x)            cerr<<(#x)<<" = "<<x<<"\n"
#define     mod               1000000007
#define     pr(x)             cout<<x<<"\n"
#define     out(a)            for(auto &x : a) cout<<x<<" "
#define     ll                long long int
#define     ld                long double
#define     trans(s)          transform(s.begin(), s.end(), s.begin(), ::tolower);
using namespace std;
int dx[]={-1,1,0,0,-1,-1,1,1};
int dy[]={0,0,-1,1,-1,+1,-1,1};

void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;

    if(s[0]=='2' and s[n-3]=='0' and s[n-2]=='2' and s[n-1]=='0')yes;
    else if(s[n-4]=='2' and s[n-3]=='0' and s[n-2]=='2' and s[n-1]=='0')yes;
    else if(s[0]=='2' and s[1]=='0'  and s[n-2]=='2' and s[n-1]=='0')yes;
    else if(s[0]=='2' and s[1]=='0' and s[2]=='2' and s[n-1]=='0')yes;
    else if(s[0]=='2' and s[1]=='0' and s[2]=='2' and s[3]=='0')yes;
    else{
        no;
        return;
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }

}



