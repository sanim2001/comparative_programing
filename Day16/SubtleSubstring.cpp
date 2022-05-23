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
    string s;
    cin>>s;
    ll sum=0;
    fi(i,0,s.size()){
        sum+=int(s[i]-'a')+1;
        //sum++;
    }
    //deb(sum);
    if(s.size()%2==0){
        cout<<"Alice "<<sum<<nl;
        return;
    }
    ll n =s.size();
    ll first = sum - int(s[0]-'a')-1;
    ll last = sum - int(s[n-1]-'a')-1;
    ll maxx = max(first, last);
    ll rem = sum-maxx;

    if(maxx>rem) cout<<"Alice "<<maxx-rem<<nl;
    else cout<<"Bob "<<rem-maxx<<nl;


}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}


