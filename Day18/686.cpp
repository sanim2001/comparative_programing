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
#define     ll                long long int
#define     ld                long double
#define     trans(s)          transform(s.begin(), s.end(), s.begin(), ::tolower);
using namespace std;
int dx[]={-1,1,0,0,-1,-1,1,1};
int dy[]={0,0,-1,1,-1,+1,-1,1};

void solve(){
    ll n;
    cin>>n;
    vector<pair<ll,ll>>v;
    for(ll i=2; i*i<=n; i++){
        int cnt =0;
        while(n%i==0){
            cnt++;
            n/=i;
        }
        if(cnt>0)v.pb({cnt,i});
    }
    if(n>1)v.pb({1,n});
    sort(all(v));
    reverse(all(v));
    vector<ll>ans;
    fi(i,0,v[0].first){
        ans.pb(v[0].second);
    }
    fi(i,1,(int)v.size()){
        fi(j,0,v[i].first){
            ans[v[0].first-1]*= v[i].second;
        }
    }
    pr(v[0].first);
    out(ans);
    pr("");

}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }

}



