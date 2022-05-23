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
    ll n= s2.size(),ans=1;
    map<ll,ll>mp;
    fi(i,0,n){
        mp[s2[i]]++;
    }
    int flag=0;
    fi(i,0,n){
        if(s2[i]=='a'){
            flag++;
        }
    }
    if(n==1 && s2[0]=='a') cout<<1<<nl;
    else if(mp.size()>=2 && flag>=1) cout<<-1<<nl;
    else{
        ll p =s1.size();
        while(p)
        {
            ans*=2;
            p--;
        }
        cout<<ans<<endl;
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





