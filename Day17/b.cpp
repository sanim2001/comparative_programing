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
    ll n,m;
    cin>>n>>m;
    ll n1=n/2, m1=m/2;
    ll a[n][m];

    fi(i,0,n){
        if(i&1)a[i][0]=0;
        else a[i][0]=1;
    }
    fi(i,0,n){
        if(i&1)a[i][m-1]=1;
        else a[i][m-1]=0;
    }

    for(int k=1; k<m-1; k+=2){
       fi(i,0,m){
            if(i<n/2) a[i][k]=0;
            else a[i][k]=1;
       }
    }
    for(int k=2; k<m; k+=2){
       fi(i,0,m){
            if(i<n/2) a[i][k]=1;
            else a[i][k]=0;
       }
    }

    fi(i,0,n){
        fi(j,0,m){
            cout<<a[i][j]<<" ";
        }
        cout<<nl;
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



