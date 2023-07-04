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
    int a[5]{0};
    int x;
    fi(i,0,n){
        cin>>x;
        a[x]++;
    }
    int ans = a[4]+a[3];
    a[1] = max(0,a[1]-a[3]);
    ans+=(a[2]*2+a[1]+3)/4;
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



