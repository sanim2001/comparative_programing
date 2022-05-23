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
ll gcd (ll a, ll b) {
    return b ? gcd (b, a % b) : a;
}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
void solve(){
    int n;
    cin>>n;
    vector<int>even,odd;
    fi(i,0,n){
        int x;
        cin>>x;
        if(i%2) odd.push_back(x);
        else even.push_back(x);
    }
    bool f1=true, f2=true;
    fi(i,0,odd.size()-1){
        if(odd[i]%2!=odd[i+1]%2){
            f1=false;
            break;
        }
    }
    fi(i,0,even.size()-1){
        if(even[i]%2!=even[i+1]%2){
            f2=false;
            break;
        }
    }
    if(f1 && f2) yes;
    else no;


}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}





