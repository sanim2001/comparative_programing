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
    int n,x,c=40;
    cin>>n;
    vector<int>v;
    if(n%2==1){
        while(n!=1 and c>0){
            x= (n+1)/2;
            if(x%2){
                n= (n+1)/2;
                v.pb(1);
            }
            else{
                n= (n-1)/2;
                v.pb(2);
            }
            c--;
        }
        if(n==1 and c>=0){
            pr(v.size());
            reverse(all(v));
            out(v);
            cout<<nl;
            return;
        }
    }
    pr(-1);
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }

}



