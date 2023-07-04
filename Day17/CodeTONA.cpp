
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
typedef long long int ll;
typedef long double ld;
using namespace std;
ll gcd (ll a, ll b) { return b ? gcd (b, a % b) : a;}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
//transform(s.begin(), s.end(), s.begin(), ::tolower);

void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll a=0,b=0;
    fi(i,0,n){
        if(s[i]=='1'){
            a++;
        }
        else b++;
    }
    ll a1=0,b1=0;
    ll mxa =0;
    ll mxb =0;
    fi(i,0,n){
        if(s[i]=='1'){
            a1++;

        }
        else {
            a1=0;
        }
        mxa = max(mxa,a1);
    }
    fi(i,0,n){
        if(s[i]=='0'){
            b1++;

        }
        else {
            b1=0;
        }
        mxb = max(mxb,b1);
    }
    long long int ans = a*b;
    long long int pwA = mxa*mxa;
    ans = max(ans,pwA);
    long long int pwB = mxb*mxb;

    ans  = max(ans,pwB);
    cout<<ans<<nl;

}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}


