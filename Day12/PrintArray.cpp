#include<bits/stdc++.h>
#define     f                 first
#define     s                 second
#define     pb                push_back
#define     all(x)            x.begin(),x.end()
#define     fi(i,a,b)         for(int i=a;i<b;i++)
#define     N                 (int)(1e9 + 7)
#define     gcd(a,b)          __gcd(a,b)
#define     yes               cout<<"YES\n"
#define     no                cout<<"NO\n"
#define     nl                "\n"
typedef long long ll;
typedef long double ld;
using namespace std;
void solve(){
    int n;
    cin>>n;
    ll a[n];
    fi(i,0,n){
        cin>>a[i];
    }
    ll gcd1=0,gcd2=0;
    int x=0,y=0;
    fi(i,0,n){
        if(i%2==0){
            gcd1=gcd(gcd1,a[i]);
        }
        else{
            gcd2=gcd(gcd2,a[i]);
        }
    }
    fi(i,1,n){
        if(a[i]%gcd1==0){
            x=1;
            break;
        }
        i++;
    }
    fi(i,0,n){
        if(a[i]%gcd2==0){
            y=1;
            break;
        }
        i++;
    }
    if(x==1 && y==1){
        cout<<0<<nl;
    }
    else if(x==0){
        cout<<gcd1<<nl;
    }
    else{
        cout<<gcd2<<nl;
    }


}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}


