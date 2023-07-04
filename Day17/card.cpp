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
typedef long long ll;
typedef long double ld;
using namespace std;
ll gcd (ll a, ll b) { return b ? gcd (b, a % b) : a;}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
//transform(s.begin(), s.end(), s.begin(), ::tolower);

void solve(){
    ll n,m;
    cin>>n>>m;

    string s1,s2;
    cin>>s1>>s2;
    int cnt =0,j=0,k=0;
    if(n<m){
        no;
        return;
    }
    if(m==1){
        if(count(all(s1),s2[0]==0)){
            no;
            return;
        }
        else{
            yes;
            return;
        }
    }
    if(s1.back()!=s2.back()){
        no;
        return;
    }

    for (int i = 0; i <= n - m; i++)
    {
        if (s1[i] == s2[0])
        {
            pr("YES");
            return;
        }
    }
    no;

}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}


