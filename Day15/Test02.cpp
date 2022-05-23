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
    int n;
    cin>>n;
    int a[n];
    int flag=0,flag1=0,same=0;
    fi(i,0,n){
        cin>>a[i];
    }
    fi(i,0,n-1){
        if(a[i]!=a[i+1]){
            same=1;
        }
    }
    fi(i,0,n){
        if(i%2==0) a[i]++;
    }
    fi(i,0,n){
        if(a[i]%2==0) flag++;
        else flag1++;
    }
    if(n==flag || n==flag1 || same==0) yes;
    else no;

}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}






