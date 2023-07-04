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
int k=1;
void solve(){
    string s;
    cin>>s;
    map<int,char>mp;
    for(int i=0; i<s.size(); i++){
        mp[i]=s[i];
    }
    int flag =0;
    for(int i=0; i<s.size(); i++){
        if(mp[i]!=mp[s.size()-i-1]){
            flag=1;
        }
    }

    if(flag==0){
        cout<<"Case "<<k<<": Yes"<<nl;
        k++;
    }
    else{
       cout<<"Case "<<k<<": No"<<nl;
       k++;
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



