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
      pair<ll,ll>p[n+1];
      fi(i,0,n){
        cin>>p[i].first;
        p[i].second = i;
      }
      sort(p,p+n);
      ll tm =0;
      int ans[n];
      ll pos =1,inx =1;
      for(int i=n-1; i>=0; i-=2){
        inx = 2*pos;
        tm+= p[i].first*inx;
        ans[p[i].second] = pos;
        pos++;
      }
      pos =-1;
      for(int i=n-2; i>=0; i-=2){
        inx = 2*abs(pos);
        tm+= p[i].first*inx;
        ans[p[i].second] = pos;
        pos--;
      }
      pr(tm);
      cout<<0<<' ';
      fi(i,0,n){

        cout<<ans[i]<<' ';
      }
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



