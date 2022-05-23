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
    string s1,s2;
    cin>>s1>>s2;
    map<char,int>m1,m2;
    for(char a:s1) m1[a]++;
    for(char a:s2) m2[a]++;
    for(char a:s1){
        if(m1[a]<m2[a]){
            no;
            return;
        }
    }
    string res;
    for(char a:s1){
        if(m1[a]>m2[a]){
            m1[a]--;
        }
        else res+=a;
    }
    if(res==s2) yes;
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



