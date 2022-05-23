#include<bits/stdc++.h>
#define     f                 first
#define     s                 second
#define     pb                push_back
#define     all(x)            x.begin(),x.end()
#define     fi(i,a,b)         for(int i=a;i<b;i++)
#define     ri(i,b,a)         for(int i=b;i>=a;i--)
#define     N                 (int)(1e9 + 7)
#define     yes               cout<<"YES\n"
#define     no                cout<<"NO\n"
#define     nl                "\n"
#define     deb(x)            cerr<<(#x)<<" = "<<x<<"\n"
typedef long long ll;
typedef long double ld;
using namespace std;
ll gcd (ll a, ll b) {
    return b ? gcd (b, a % b) : a;
}
void solve(){
    int n,maxx=0;
    cin>>n;
    int a[n];
    fi(i,0,n) cin>>a[i];
    vector<int>v;
    fi(i,0,n){
        if(maxx<a[i]) maxx=a[i];
    }


    deb(maxx);
    if(maxx!=a[n-1] && maxx!=a[0]){
        cout<<-1<<nl;
    }
    else{
        ri(i,n-1,0) cout<<a[i]<<" ";
        cout<<nl;
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}


