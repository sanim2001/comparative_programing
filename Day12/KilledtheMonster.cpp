#include<bits/stdc++.h>
#define     f                 first
#define     s                 second
#define     pb                push_back
#define     all(x)            x.begin(),x.end()
#define     fi(i,a,b)         for(int i=a;i<=b;i++)
#define     N                 (int)(1e9 + 7)
#define     gcd(a,b)          __gcd(a,b)
#define     yes               cout<<"YES\n"
#define     no                cout<<"NO\n"
#define     nl                "\n"
typedef long long ll;
typedef long double ld;
using namespace std;
void solve(){
    ll hc,dc,hm,dm,k,w,h;
    cin>>hc>>dc>>hm>>dm>>k>>w>>h;
    bool flag=false;
    fi(i,0,k){
        ll ch=hc+(i*h);
        ll cw=dc+((k-i)*w);
        ll time = hm/cw;
        if(hm%cw!=0) time++;
        ll timeKilled = ch/dm;
        if(ch%dm!=0) timeKilled++;
        if(time<=timeKilled){
            flag=true;break;
        }
    }
    if(flag) yes;
    else no;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}



