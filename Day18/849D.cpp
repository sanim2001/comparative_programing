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
typedef long long int ll;
typedef long double ld;
using namespace std;
ll gcd (ll a, ll b) { return b ? gcd (b, a % b) : a;}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
//transform(s.begin(), s.end(), s.begin(), ::tolower);

void solve(){
    string s;
    int n;
    cin>>n>>s;
    vector<int>p(n,0),sf(n,0);
    set<char>st;
    fi(i,0,n){
        st.insert(s[i]);
        p[i]= st.size();
    }
    st.clear();

    ri(i,n-1,0){
        st.insert(s[i]);
        sf[i]= st.size();
    }

    int mx=0,cnt=0;
    fi(i,0,n-1){

        cnt  = p[i]+sf[i+1];
        mx = max(mx,cnt);
    }
    pr(mx);

}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }

}


