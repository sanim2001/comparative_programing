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

ll gcd(ll a, ll b){
    if(b==0) return a;
    else gcd(b, a%b);
}

void solve(){
    ll n,k;
    cin>>n;
    vector<ll>a(n);
    fi(i,0,n){
        cin>>k;
        a[i]=k;
    }
    cout<<nl;
    ll mx =  *max_element(all(a));

    vector<int>v(mx+1,0),v1;
    for(auto x:a){
        v[x]=1;
    }


    fi(i,1,mx+1){
        ll gcd1=0;
        for(ll j=i; j<=mx; j+=i){
            if(v[j]==1){
                gcd1 = gcd(gcd1,j);
                v1.pb(gcd1);
            }
        }
    }
    out(v1);
    pr("");
    ll m,x;
    cin>>m;
    fi(i,0,m){
        cin>>x;
        ll ans = count(all(v1),x);
        pr(ans);
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }

}



