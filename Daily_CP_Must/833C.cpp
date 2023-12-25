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
    ll n,m,h,x,y,z,r,p,f=0;
    cin>>n>>m>>h;
    vector<pair<int,int>>v;
    ll a[n][m];
    fi(i,0,n){
        fi(j,0,m)cin>>a[i][j];
        sort(a[i],a[i]+m);
    }
    fi(i,0,n){
        ll sum=0,xx=0,k=m;
        fi(j,0,m){

            if(xx+a[i][j]<=h)xx+=a[i][j],sum+=xx;
            else{
                k =j;
                break;
            }
        }
        v.pb({k,sum});
    }
    int ans=0;
    for(auto &[u1,v1]:v){
        if(u1>v[0].first)ans++;
        else if(u1==v[0].first){
            if(v1<v[0].second)ans++;
        }
    }
    pr(ans+1);

}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }

}


