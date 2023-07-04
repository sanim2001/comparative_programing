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
    int n,m;
    int x1,y1,x2,y2;
    cin>>n>>m>>x1>>y1>>x2>>y2;
    int a=4,b=4;
    if(x1==1 || x1==n)a--;
    if(y1==1 || y1==m)a--;

    if(x2==1 || x2==n)b--;
    if(y2==1 || y2==m)b--;
    pr(min(a,b));

}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }

}



