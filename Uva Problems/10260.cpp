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
typedef long long int ll;
typedef long double ld;
using namespace std;
//transform(s.begin(), s.end(), s.begin(), ::tolower);

void solve(){
    string s;
    while(cin>>s){
        int cnt1 =-1;
        int cnt2 =-1;
        fi(i,0,s.size()){
            if(s[i]=='C'||s[i]=='G'||s[i]=='J'||s[i]=='K'||s[i]=='Q'||s[i]=='S'||s[i]=='X'||s[i]=='Z') cnt1=2;
            else if(s[i]=='B'||s[i]=='F'||s[i]=='P'||s[i]=='V') cnt1=1;
            else if(s[i]=='D'||s[i]=='T') cnt1=3;
            else if(s[i]=='M'||s[i]=='N') cnt1=5;
            else if(s[i]=='L') cnt1=4;
            else if(s[i]=='R') cnt1=6;
            else cnt1=-1;
            if(cnt1!=cnt2 and cnt1!=-1)cout<<cnt1;

            cnt2 = cnt1;
        }
        cout<<nl;
    }
}

int main(){
    //ios_base::sync_with_stdio(0);cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }

}



