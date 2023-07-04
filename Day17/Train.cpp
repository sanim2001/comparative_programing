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
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    map<ll,vector<ll>>mp;
    fi(i,0,n){
        cin>>v[i];
        mp[v[i]].pb(i);
    }
    for(auto x: mp){
        cout<<x<<"\n";
    }
    while(k--){
        ll p,q;
        cin>>p>>q;
        if(mp[p].empty() || mp[q].empty()){
            no;
        }
        else if(mp[p].front()>mp[q].back()){
            no;
        }
        else{
            yes;
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




