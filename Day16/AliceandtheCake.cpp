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
    ll a[n];
    ll sum=0;
    map<ll,ll>mp;
    priority_queue<ll> pq;
    fi(i,0,n){
        cin>>a[i];
        sum+=a[i];
        mp[a[i]]++;
    }
    if(n==1){
        yes;
        return;
    }
    pq.push(sum);
    while(pq.size()<n){
        ll x= pq.top();
        pq.pop();
        ll p=x/2,q=(x+1)/2;

        if(mp.count(p)) mp[p]--,n--;
        else pq.push(p);
        if(mp[p]==0) mp.erase(p);

        if(mp.count(q)) mp[q]--,n--;
        else pq.push(q);
        if(mp[q]==0) mp.erase(q);
    }
    if(pq.size()==0) yes;
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



