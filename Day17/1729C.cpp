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
    string s;
    cin>>s;
    int n= s.size();
    map<char, vector<int>>mp;

    for (int i=0; i<n; i++)mp[s[i]].pb(i+1);

    if(s[0]==s[n-1]){
        cout<<"0 "<<mp[s[0]].size()<<nl;
        for(auto x:mp[s[0]]){
            cout<<x<<" ";
        }
        cout<<nl;
        return;
    }
    if(s[0]>s[n-1]){
        int jp = 0;
        int co = abs(s[0]-s[n-1]);
        vector<int>pt;
        for(int i=0; s[0]+i>=s[n-1]; i--){
            char c= s[0]+i;
            if(mp.find(c)!=mp.end()){
                for(auto x:mp[c]){
                    pt.pb(x);
                }
            }
        }
        cout<<co<<" "<<pt.size()<<nl;
        for(auto x:pt){
            cout<<x<<" ";
        }
        cout<<nl;

    }
    else{
        int jp = 0;
        int co = abs(s[0]-s[n-1]);
        vector<int>pt;
        for(int i=0; s[0]+i<=s[n-1]; i++){
            char c= s[0]+i;
            if(mp.find(c)!=mp.end()){
                for(auto x:mp[c]){
                    pt.pb(x);
                }
            }
        }
        cout<<co<<" "<<pt.size()<<nl;
        for(auto x:pt){
            cout<<x<<" ";
        }
        cout<<nl;
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


