#include<bits/stdc++.h>
using namespace std;
const int N = 1e7;
#define ll long long
ll n,m;
ll a[N];
bool woodcut(ll h){
    ll wood = 0;
    for(int i=0; i<n; i++){
        if(a[i]>=h){
            wood+=(a[i]-h);
        }
    }
    return wood>=m;
}
int main(){

    cin>>n>>m;
    for(int i=0; i<n; i++) cin>>a[i];
    ll lo =0, hi = N,mid;
    while(hi-lo>1){
        mid=(lo+hi)/2;
        if(woodcut(mid)) lo = mid;
        else hi = mid-1;
    }
    if(woodcut(hi)) cout<<hi<<"\n";
    else cout<<lo<<"\n";
}
