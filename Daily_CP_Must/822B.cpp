#include<bits/stdc++.h>
#define     pb                push_back
#define     all(x)            x.begin(),x.end()
#define     fi(i,a,b)         for(ll i=a;i<b;i++)
#define     ri(i,b,a)         for(ll i=b;i>=a;i--)
#define     N                 (int)(1e9 + 7)
#define     yes               cout<<"YES\n"
#define     no                cout<<"NO\n"
#define     nl                "\n"
#define     deb(x)            cerr<<(#x)<<" = "<<x<<"\n"
#define     pr(x)             cout<<x<<"\n"
#define     out(a)            for(auto &x : a) cout<<x<<" "
#define     ll                long long int
#define     ld                long double
#define     trans(s)          transform(s.begin(), s.end(), s.begin(), ::tolower);
#define     lcm(a,b)          (a*(b/gcd(a,b)))
using namespace std;
const long long mod = 1e9 + 7;
int dx[]={-1,1,0,0,-1,-1,1,1};
int dy[]={0,0,-1,1,-1,+1,-1,1};
ll gcd(ll a,ll b){
    if(b==0)return a;
    else gcd(b, a%b);
}

void solve(){
    ll n;
    cin>>n;
    ll a[n];
    fi(i,0,n){
        cin>>a[i];
    }
    ll ans = 0,x = a[0],f=0;
    fi(i,1,n){
        if(x==0){
            f=1;
            ans++;
            x=a[i];
        }else{
            x = x &a[i];
        }
    }
    if(f==1 and x!=0)pr(ans);
    else pr(ans+1);

}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }

}



