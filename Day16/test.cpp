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
     string s;
     cin >> s;
     int n = s.size();
     if(n == 1) {
        cout << 1 << endl;
        return;
     }
     int l = n - 1, r = 0;
     for(int i=0; i<n; i++) {
        if(s[i] == '0') {
            l = i;
            break;
        }
     }

     for(int i=n-1; i>=0; i--){
        if(s[i] == '1') {
            r = i;
            break;
        }
     }

 cout << abs(l - r) + 1 << endl;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}




