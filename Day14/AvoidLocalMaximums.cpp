#include<bits/stdc++.h>
#define     f                 first
#define     s                 second
#define     pb                push_back
#define     all(x)            x.begin(),x.end()
#define     fi(i,a,b)         for(int i=a;i<b;i++)
#define     ri(i,b,a)         for(int i=b;i>=a;i--)
#define     N                 (int)(1e9 + 7)
#define     gcd(a,b)          __gcd(a,b)
#define     yes               cout<<"YES\n"
#define     no                cout<<"NO\n"
#define     nl                "\n"
typedef long long ll;
typedef long double ld;
using namespace std;
void solve(){
    ll n,c=0;
    cin>>n;
    ll a[n+2];
    fi(i,0,n){
        cin>>a[i];
    }
    a[n]=0;
    fi(i,1,n-1){
        if(a[i]>a[i-1] && a[i]>a[i+1]){
            c++;
            if(a[i+2]==max(a[i],max(a[i+1],a[i+2]))){
                a[i+1]=a[i+2];
            }
            else if(a[i]>a[i+1]) a[i+1]=a[i];
            else a[i]=a[i+1];
        }
    }
    cout<<c<<nl;
    fi(i,0,n){
        cout<<a[i]<<" ";
    }
    cout<<nl;

}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}



