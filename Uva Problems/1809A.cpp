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
typedef long long int ll;
typedef long double ld;
using namespace std;
//transform(s.begin(), s.end(), s.begin(), ::tolower);

void solve(){
    string s;
    cin>>s;
    map<char,int>mp;
    int mx = 0;
    fi(i,0,s.size()){
        mp[s[i]]++;
        mx = max(mx,mp[s[i]]);
    }
    if(mp.size()==4){
        pr(4);
        return;
    }
    if(mp.size()==1){
        pr(-1);
        return;
    }
    if(mx==2){
        pr(4);
        return;
    }
    pr(6);


}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }

}



