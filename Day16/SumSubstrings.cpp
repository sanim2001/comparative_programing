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
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    ll sum=0;
    fi(i,0,s.size()){
        if(s[i]=='1') sum++;
    }
    if(sum==0){
        pr(0);
        return;
    }
    ll ans = (sum*10)+sum;
    int i=n-1,rem=k,flag=0;
    while(i>=0 && rem>=0){
        if(s[i]=='1'){
            flag=1;
            ans-=10;
            break;
        }
        else{
            rem--;
            i--;
        }
    }
    if(flag==0)rem=k,i=n-1;
    int j=0;
    while(rem>=0 && i>j){
        if(s[j]=='1'){
            ans--;
            break;
        }
        else{
            rem--;
            j++;
        }
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



