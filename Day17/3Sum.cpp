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
    ll n;
    cin>>n;
    ll a[n];
    fi(i,0,n){
        cin>>a[i];
    }
    sort(a,a+n);
    ll lo=0, hi=0, sum=0LL;
    fi(i,0,n){
        lo = i+1,hi =n-1;
        while(lo<hi){
            sum = a[i] + a[lo] +a[hi];
            if(sum%10 == 3){
                yes;
                return;
            }
            lo++;
        }
        lo = i+1;
        while(lo<hi){
            sum = a[i] + a[lo] +a[hi];
            if(sum%10 == 3){
                yes;
                return;
            }
            hi--;
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



