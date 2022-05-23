#include<bits/stdc++.h>
typedef long long ll;

#define     f                 first
#define     s                 second
#define     pb                push_back
#define     all(x)            x.begin(),x.end()
#define     fi(i,a,b)         for(int i=a;i<b;i++)
#define     fe(a)             for(auto &e : a)
#define     fr(i,n)           for(int i=0;i<n;i++)
#define     vt                vector<int>
#define     N                 (int)(1e9 + 7)
#define     gcd(a,b)          __gcd(a,b)
#define     yes               "YES\n"
#define     no                "NO\n"





using namespace std;

void solve(){
    int n,m,rb,cb,rd,cd;
    cin>>n>>m>>rb>>cb>>rd>>cd;
    int i=1,j=1,ans=0;

    while(rb!=rd && cb!=cd){
        if(rb+i>n || rb+i<1)
            i*=-1;
        if(cb+j>m || cb+j<1)
            j*=-1;
        rb+=i;
        cb+=j;
        ans++;
    }
    cout<<ans<<"\n";

}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;

    while(t--){
        solve();
    }
}

