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
ll gcd (ll a, ll b) {
    return b ? gcd (b, a % b) : a;
}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
void solve(){
    int n;
    cin>>n;
    string s[n];
    map<char,int>m1,m2;
    map<string,int>mp;
    fi(i,0,n){
        cin>>s[i];
        m1[s[i][0]]++;
        m2[s[i][1]]++;
        mp[s[i]]++;
    }
    ll ans=0;

    fi(i,0,n){
        char a = s[i][0];
        char b = s[i][1];
        ans+=(m1[a]-mp[s[i]])+(m2[b]-mp[s[i]]);
        m1[a]--;
        m2[b]--;
        mp[s[i]]--;
    }
    pr(ans);

}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}




