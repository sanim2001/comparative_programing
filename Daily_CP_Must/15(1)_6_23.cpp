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
#define     gcd(a,b) __gcd(a,b)
#define     lcm(a,b) (a*(b/gcd(a,b)))
using namespace std;
const long long mod = 1e9 + 7;
int dx[]={-1,1,0,0,-1,-1,1,1};
int dy[]={0,0,-1,1,-1,+1,-1,1};

void solve(){
    ll n;
    cin>>n;
    vector<int>a(n),tk;
    int f=0;
    fi(i,0,n){
        cin>>a[i];
        if(tk.empty()){
            cout<<1;
            tk.pb(a[i]);
        }
        else{
            if(f){
                if(a[i]<tk.back()){
                   cout<<0;
                }
                else{
                    if(a[i]<=tk[0]){
                        cout<<1;
                        tk.pb(a[i]);
                    }
                    else{
                        cout<<0;
                    }
                }
            }
            else{
                if(a[i]>=tk.back()){
                    cout<<1;
                    tk.pb(a[i]);
                }
                else{
                    if(a[i]>tk[0]){
                        cout<<0;
                    }
                    else{
                        f=1;
                        cout<<1;
                        tk.pb(a[i]);
                    }
                }
            }
        }
    }
    cout<<nl;


}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }

}


