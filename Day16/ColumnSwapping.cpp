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
    int n,m;
    cin>>n>>m;
    vector<int> v1[n],v2[n];
    int ind=-1,ans1=1,ans2=1;
    fi(i,0,n){
        fi(j,0,m){
            int x;
            cin>>x;
            v1[i].push_back(x);
        }
        v2[i]=v1[i];
        sort(all(v2[i]));
        if(v1[i]!=v2[i]){
            ind=i;
        }
    }
    if(ind==-1){
        cout<<1<<" "<<1<<nl;
        return;
    }
    fi(i,0,m){
        if(v1[ind][i]!=v2[ind][i]){
            ans1=i;
            break;
        }
    }
    ri(i,m-1,0){
        if(v1[ind][i]!=v2[ind][i]){
            ans2=i;
            break;
        }
    }
    fi(i,0,n){
        swap(v1[i][ans1],v1[i][ans2]);
    }
    int ans =-1;
    fi(i,0,n){
        if(v1[i]!=v2[i]){
            ans=1;
            break;
        }
    }
    if(ans==1) pr(-1);
    else cout<<ans1+1<<" "<<ans2+1<<nl;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}





