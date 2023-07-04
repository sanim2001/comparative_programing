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

}
vector<ll>v1,v2;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    ll sum=0;
    fi(i,1,t+1)sum+=i;
    if(sum&1)no;
    else{
        yes;
        sum/=2LL;
        while(t){
            if(sum-t>-1){
                v1.pb(t);
                sum-=t;
            }
            else{
                v2.pb(t);
            }
            t--;
        }
    }
    pr(v1.size());
    for(ll x:v1)cout<<x<<" ";
    cout<<nl;
    pr(v2.size());
    for(ll x:v2)cout<<x<<" ";


    v1.clear();
    v2.clear();
}




