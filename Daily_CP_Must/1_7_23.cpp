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
#define     pr(x)             cout<<x<<"\n"
#define     out(a)            for(auto &x : a) cout<<x<<" "
#define     ll                long long int
#define     ld                long double
#define     trans(s)          transform(s.begin(), s.end(), s.begin(), ::tolower);
#define     lcm(a,b) (a*(b/gcd(a,b)))
using namespace std;
const long long mod = 1e9 + 7;
int dx[]={-1,1,0,0,-1,-1,1,1};
int dy[]={0,0,-1,1,-1,+1,-1,1};
ll gcd(ll a,ll b){
    if(b==0)return a;
    else gcd(b, a%b);
}

void solve(){
    int a1,a2;
    int b1,b2;
    int c1,c2;
    cin>>a1>>a2;
    cin>>b1>>b2;
    cin>>c1>>c2;
    int ans =0;
    int x1  = a1-b1, x2 = a1-c1;
    int y1  = a2-b2, y2 = a2-c2;

    if((x1<0) and x2<0)ans-=max(x1,x2);
    if((x1>0) and x2>0)ans+=min(x1,x2);
    if((y1<0) and y2<0)ans-=max(y1,y2);
    if((y1>0) and y2>0)ans+=min(y1,y2);
    pr(ans+1);

}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }

}



