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
#define     mod               1000000007
#define     pr(x)             cout<<x<<"\n"
typedef long long ll;
typedef long double ld;
using namespace std;
int j=1;
void solve(){
    int n;
    cin>>n;
    int a[n],b[n];
    fi(i,0,n){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(a,a+n);
    vector<int>v;
    fi(i,0,n){
        if(a[i]!=b[i])v.pb(i);
    }

    int x=v[0],mx = INT_MIN, nn =v.size();
    fi(i,1,nn){
        x&= v[i];
    }
    pr(x);

}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}




