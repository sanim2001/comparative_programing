#include<bits/stdc++.h>
#define     pb                push_back
#define     all(x)            x.begin(),x.end()
#define     fi(i,a,b)         for(int i=a;i<b;i++)
#define     ri(i,b,a)         for(int i=b;i>=a;i--)
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
    int n;
    cin>>n;
    ll a=0, b=0,c=0;
    ll x;
    fi(i,0,n){
        cin>>x;
        a+=x;
    }
    fi(i,0,n-1){
        cin>>x;
        b+=x;
    }
    fi(i,0,n-2){
        cin>>x;
        c+=x;
    }
    pr(a-b);
    pr(b-c);
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t=1;
   // cin>>t;
    while(t--){
        solve();
    }

}





