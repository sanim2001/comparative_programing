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
    int n =8;
    string s[8], nw= "";
    fi(i,0,n){
        cin>>s[i];
    }
    int flag =0;
    fi(i,0,n){
        int sz =0;
        fi(j,0,n){
            if(s[i][j]=='R'){
                sz++;
            }
        }

        if(sz==8){
            nw = "R";
            flag = 1;
        }
    }
    if(flag==1){
        cout<<nw<<nl;
    }
    else{
        cout<<"B"<<nl;
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



