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
    ll a[n],b[n];
    fi(i,0,n){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    int l =0,r =0, cnt =0,f=0,q=0;
    fi(i,0,n){
        if(a[i]!=b[i]){
            cnt++;
        }
        if(cnt==1 and q==0){
            l=b[i];
            q=1;
        }
        if(cnt==2 and f==0){
            r=b[i];
            f=1;
        }
    }
    if(n==2)l=1,r=1;
    if(cnt==2 || n==2){
        cout<<"yes"<<nl;
        cout<<l<<" "<<r<<nl;
    }
    else{
        cout<<"no"<<nl;
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



