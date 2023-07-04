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
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    vector<int>pre(n+5);
    fi(i,1,n+1)cin>>a[i];
    fi(i,1,n+1){
        pre[i] = pre[i-1]+a[i];
    }
    int mx = INT_MAX, j=0;
    fi(i,1,n-k+2){
        int ans = pre[i+k-1]-pre[i-1];
        if(ans<mx){
            mx = ans;
            j = i;
        }
    }
    pr(j);
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }

}



