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

ll cnt(ll ans){
    ll c=0;
    while(ans){
        ans/=10;
        c++;
    }
    return c;
}
void solve(){
    int a,b,c;
    cin>>a>>b>>c;

    ll x =1,y=1;
    fi(i,0,a-1){
        x*=10;
    }
    fi(i,0,b-1){
        y*=10;
    }
    //cout<<x<<" "<<y<<nl;

    while(1){
        ll ans = gcd(x,y);
        ll m = cnt(ans);
        if(c==m){
            cout<<x<<" "<<y<<nl;
            return;
        }
        x++;
        m = cnt(x);

        if(m>a){
            break;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }

}



