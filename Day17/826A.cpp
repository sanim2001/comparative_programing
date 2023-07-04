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
ll gcd (ll a, ll b) { return b ? gcd (b, a % b) : a;}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
//transform(s.begin(), s.end(), s.begin(), ::tolower);

void solve(){
    string s1,s2;
    cin>>s1>>s2;
    int flag =0;
    int n = s1.size()-1;
    int m = s2.size()-1;
    while(n>=0 && m>=0){
        if(s1[n]==s2[m]){

            if(s1[n]=='S'){
                if(n>m)pr("<");
                else if (n<m) pr(">");
                else pr("=");
                return;
            }
            n--,m--;
            continue;
        }
        else if(s1[n]=='L' and s2[m]=='M' || s1[n]=='M' and s2[m]=='S' || s1[n]=='L' and s2[m]=='S'){
            pr(">");
            return;
        }
        else if(s1[n]=='M' and s2[m]=='L' || s1[n]=='S' and s2[m]=='M' || s1[n]=='S' and s2[m]=='L'){
            pr("<");
            return;
        }

    }
    if(n>m) pr(">");
    else if(n<m) pr("<");
    else pr("=");



}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}



