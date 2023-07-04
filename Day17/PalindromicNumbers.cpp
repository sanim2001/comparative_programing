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

void solve(){
    ll n;
    string s;
    cin>>n>>s;
    ll ans =0,rem=0;
    string s1="";
    if(s[0]!='9'){
        fi(i,0,n){
            ll n1 = s[i]-'0';
            rem = 9-n1;
            s1+=rem+'0';
        }
        cout<<s1<<nl;
    }
    else{
        ri(i,n-1,0){
            ll n1 = s[i]-'0';
            n1+=rem;
            if(n1>1){
               ans = 11-n1;
               rem=1;
               s1+=ans+'0';
            }
            else{
                rem=0;
                ans = 1-n1;
                s1+=ans+'0';
            }
        }
        reverse(all(s1));
        cout<<s1<<nl;
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



