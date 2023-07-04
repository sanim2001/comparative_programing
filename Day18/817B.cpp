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
    int n;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    fi(i,0,n){
        if(s1[i]=='R' and s2[i]=='R')continue;
        else if(s1[i]=='G' and s2[i]=='G')continue;
        else if(s1[i]=='B' and s2[i]=='B')continue;
        else if(s1[i]=='G' and s2[i]=='B')continue;
        else if(s1[i]=='B' and s2[i]=='G')continue;
        else{
            no;
            return;
        }
    }
    yes;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }

}



