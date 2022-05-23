#include<bits/stdc++.h>
typedef long long ll;

#define     f                 first
#define     s                 second
#define     pb                push_back
#define     all(x)            x.begin(),x.end()
#define     fi(i,a,b)         for(int i=a;i<b;i++)
#define     fe(a)             for(auto &e : a)
#define     fr(i,n)           for(int i=0;i<n;i++)
#define     vt                vector<int>
#define     N                 (int)(1e9 + 7)
#define     gcd(a,b)          __gcd(a,b)
#define     yes               "YES\n"
#define     no                "NO\n"





using namespace std;

void solve(){
    ll n;
    cin>>n;
    ll l[n],r[n];
    map<pair<ll,ll>,ll> mp;
    for(int i=0;i<n;i++){
        cin>>l[i]>>r[i];
        mp[{l[i],r[i]}]=1;
    }
    for(int i=0;i<n;i++){
        for(int j=l[i];j<=r[i];j++){
                if(l[i]==r[i])
                {
                cout << l[i] << " " << r[i] << " " << j << "\n";
                }
                if(mp[{l[i],j-1}]==1 && mp[{j+1,r[i]}]==1)
                {
                cout << l[i] << " " << r[i] << " " << j << "\n";
                }
                if(j==l[i] && mp[{j+1,r[i]}]==1||j==r[i] && mp[{l[i],j-1}]==1)
                {
                cout << l[i] << " " << r[i] << " " << j << "\n";
                }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;

    while(t--){
        solve();
        cout<<"\n";
    }
}

