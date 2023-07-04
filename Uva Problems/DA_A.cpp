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
#define     mod               1000000007
#define     pr(x)             cout<<x<<"\n"
#define     out(a)            for(auto &x : a) cout<<x<<" "
typedef long long int ll;
typedef long double ld;
using namespace std;
//transform(s.begin(), s.end(), s.begin(), ::tolower);

void solve(){
    ll n;
    cin>>n;
    ll a[n],b[n];
    fi(i,0,n)cin>>a[i];
    fi(i,0,n)cin>>b[i];
    vector<ll>v(n,0);
    fi(i,0,n)v[i]=a[i]-b[i];
    sort(all(v));
    ll l=0, r = n-1,ans=0LL;
    while(v[r]>0 and l<r){
        if(v[l]+v[r]>0){
            ans+=r-l;
            r--;
        }
        else l++;
    }
    pr(ans);

}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }

}



