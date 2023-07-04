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
#define  cbit(n,p)          ((n)&(1LL<<(p)))
#define  sbit(n,p)          ((n)|(1LL<<(p)))
#define  tbit(n,p)          ((n)^(1LL<<(p)))
//ll gcd (ll a, ll b) { return b ? gcd (b, a % b) : a;}
//ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
typedef long long ll;
typedef long double ld;
using namespace std;

void solve(){
    int n;
    cin>>n;
    int m=n;
    int a[n];
    vector<int>v;
    fi(i,0,n){
        cin>>a[i];
    }
    fi(i,0,n){
        int p;
        int cnt=a[i];
        string q;
        cin>>p>>q;
        int d=0,u=0;
        fi(i,0,p){
            if(q[i]=='D'){
                if(cnt==9)cnt=0;
                else cnt++;
            }
            else{
                if(cnt==0)cnt=9;
                else cnt--;
            }
        }
        v.pb(cnt);
    }
    for(auto x: v)cout<<x<<" ";
    cout<<nl;


}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}





