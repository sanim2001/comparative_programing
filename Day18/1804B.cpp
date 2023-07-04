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
typedef long long int ll;
typedef long double ld;
using namespace std;
//transform(s.begin(), s.end(), s.begin(), ::tolower);

void solve(){
    int n,m,d,w;
    cin>>n>>m>>d>>w;
    ll a[n];
    fi(i,0,n){
        cin>>a[i];
    }
    ll time=1,cnt=0,m1=0;
    fi(i,0,n){
        if(time<=a[i] || m1==0){
            cnt++;
            time=a[i]+d+w+1;
            m1=m-1;
        }
        else{
            m1--;
        }
    }
    pr(cnt);
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }

}



