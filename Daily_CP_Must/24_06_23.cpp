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

#define     lcm(a,b) (a*(b/gcd(a,b)))
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
    fi(i,0,n)cin>>a[i];
    if(n==1){
        pr(a[0]);
        return;
    }
    vector<ll>pre(n);
    pre[0]= a[0];
    fi(i,1,n){
        pre[i]=pre[i-1]+a[i];
    }
    ll sum=0,ans=0,mx =0;
    fi(i,0,pre.size()-1){
        sum = pre[n-1]-pre[i];
        //cout<<pre[i]<<" "<<sum<<nl;
        ans = gcd(pre[i],sum);
        mx= max(mx,ans);
    }

    pr(mx);
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }

}



