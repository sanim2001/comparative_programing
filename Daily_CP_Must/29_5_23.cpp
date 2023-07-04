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
#define     gcd(a,b) __gcd(a,b)
#define     lcm(a,b) (a*(b/gcd(a,b)))
using namespace std;
const long long mod = 1e9 + 7;
int dx[]={-1,1,0,0,-1,-1,1,1};
int dy[]={0,0,-1,1,-1,+1,-1,1};

void solve(){
    ll n;
    cin>>n;
    map<ll,ll>m1,m2;
    ll a[n],b[n];
    fi(i,0,n){
        cin>>a[i];
    }
    fi(i,0,n){
        cin>>b[i];
    }
    ll cnt =0;
    fi(i,0,n){
        cnt++;
        if(i==n-1 || a[i+1]!=a[i]){
            if(m1.find(a[i])== m1.end()){
                m1[a[i]]=cnt;
            }
            else{
                m1[a[i]]=max(m1[a[i]],cnt);
            }
            cnt =0;
        }
    }
    cnt =0;
    fi(i,0,n){
        cnt++;
        if(i==n-1 || b[i+1]!=b[i]){
            if(m2.find(b[i])== m2.end()){
                m2[b[i]]=cnt;
            }
            else{
                m2[b[i]]=max(m2[b[i]],cnt);
            }
            cnt =0;
        }
    }
    ll ans =0;
    for (auto [x,y]:m1){
        ans=max(ans, m1[x]+m2[x]);
    }
    for (auto [x,y]:m2){
        ans=max(ans, m1[x]+m2[x]);
    }
    pr(ans);
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }

}



