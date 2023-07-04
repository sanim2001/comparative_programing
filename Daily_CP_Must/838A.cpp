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
    ll a[n];
    fi(i,0,n)cin>>a[i];
    ll mn =N;

    ll sum = accumulate(a,a+n,0LL);
    ll c=0;
    if(sum%2==0){
        pr(0);
        return;
    }
    fi(i,0,n){

       if(a[i]%2){
         while(a[i]%2){
             c++;
             a[i]/=2;
         }
        }else{
             while(!a[i]%2){
                c++;
                a[i]/=2;
             }
         }

       }
       if(c!=0) mn = min(mn,c);
    }

    pr(mn);
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }

}


