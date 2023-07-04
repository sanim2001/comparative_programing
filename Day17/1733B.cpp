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
typedef long long ll;
typedef long double ld;
using namespace std;
ll gcd (ll a, ll b) { return b ? gcd (b, a % b) : a;}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
//transform(s.begin(), s.end(), s.begin(), ::tolower);

void solve(){
    int n, x,y;
    cin>>n>>x>>y;
    int sum = x+y;
    if(x>y)swap(x,y);
    if(x==0 && y==0 || min(x,y)!=0){
        pr(-1);
        return;
    }
    if((n-1)%sum!=0){
        pr(-1);
        return;
    }
    else{
        fi(i,2,n+1){
            fi(j,1,y+1){
                cout<<i<<" ";
            }
            i--;
            i+=y;
        }
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



