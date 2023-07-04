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
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    map<char,int>mp;
    fi(i,0,n)mp[s[i]]++;
    string ans = "";
    fi(i,0,m){
        char ch;
        int cnt= 1, f= 0, x = n/m;
        for(ch  = 'a'; ch<='z' ; ch++){
            if(cnt>x){
                f = 1;
                break;
            }
            if(mp[ch]==0){
                ans+=ch;
                break;
            }
            mp[ch]--;
            cnt++;
        }
        if(f==1)ans+=ch;
    }
    pr(ans);
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}



