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
    ll n;
    cin>>n;
    ll a[n];
    vector<ll>v;
    fi(i,0,n){
        cin>>a[i];
    }
    if(n&1){
        no;
        return;
    }
    sort(a,a+n);
    for(int i=0,j=n/2;i<n/2; i++,j++){
        v.pb(a[i]);
        v.pb(a[j]);
    }
    v.pb(v[0]);
    v.pb(v[1]);
    int ans=0;
    fi(i,1,n-1){
        if(v[i]>v[i-1] and v[i]>v[i+1]) continue;
        else if(v[i]<v[i-1] and v[i]<v[i+1]) continue;
        else {
            ans=1;
            break;
        }
    }
    if(ans==1) no;
    else{
        yes;
        fi(i,0,n){
            cout<<v[i]<<" ";
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




