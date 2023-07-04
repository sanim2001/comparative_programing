#include<bits/stdc++.h>
#define     f                 first
#define     s                 second
#define     pb                push_back
#define     all(x)            x.begin(),x.end()
#define     fi(i,a,b)         for(int i=a;i<=b;i++)
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
    int a[n+2],b[n+2];
    fi(i,1,n) cin>>a[i];
    fi(i,1,n) cin>>b[i];
    vector<pair<int,int>>v;
    fi(i,1,n){
        fi(j,i+1,n){
            if(a[i]>=a[j] and b[i]>=b[j]){
                swap(a[i],a[j]);
                swap(b[i],b[j]);
                v.pb({i,j});
            }
        }
    }
    int f1 =0,f2=0;
    fi(i,1,n-1){
        if(a[i]>a[i+1]) f1 = 1;
    }
    fi(i,1,n-1){
        if(b[i]>b[i+1]) f2 = 1;
    }
    if(f1 || f2) cout<<"-1"<<endl;
    else if(v.size()==0) cout<<"0"<<endl;
    else{
        cout<<v.size()<<endl;
        for(int i=0; i<v.size(); i++){
            cout<<v[i].first<<" "<<v[i].second<<endl;
        }
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


