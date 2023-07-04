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
    cin>>n;
    int a[n];
    map<int,int>mp;
    fi(i,0,n){
        cin>>a[i];
        mp[a[i]]++;
    }
    int mex =0;
    vector<int>v;
    while(mp[mex]>0)mex++;
    fi(i,0,n){
        if(mex==0){
            fi(j,i,n)v.pb(0);
            break;
        }
        map<int,int>mp1;
        while(mp1.size()!=mex && i<n){
            if(a[i]<mex)mp1[a[i]]++;
            mp[a[i]]--;
            i++;
        }
        i--;
        v.pb(mex);
        mex=0;
        while(mp[mex]>0)mex++;
    }
    pr(v.size());
    fi(i,0,v.size())cout<<v[i]<<" ";
    cout<<nl;

}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}


