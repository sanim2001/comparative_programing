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
    int n;
    string s;
    cin>>n>>s;
    int cnt=0;
    fi(i,0,n){
        if(s[i]=='*')cnt++;
    }
    if(cnt==n || cnt==0 || cnt==1){
        pr(0);
        return;
    }
    int mid = (cnt+1)/2;
    int ans =0,k=0,c=0;
    fi(i,0,n){
        if(s[i]=='*')c++;
        if(c==mid){
            k=i;
            break;
        }
    }
    ll tem =0;
    ri(i,k-1,0){
        if(s[i]=='.'){
            ans++;
        }
        else{
            tem+=ans;
        }
    }
    ans =0;
    fi(i,k+1,n){
        if(s[i]=='.'){
            ans++;
        }
        else{
            tem+=ans;
        }
    }
    pr(tem);



}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}



