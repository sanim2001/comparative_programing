#include<bits/stdc++.h>
using namespace std;

#define fi(i,a,b) for(int i=a; i<b; i++)
void solve(){
    int n,m;
    cin>>n>>m;
    int a[n];
    fi(i,0,n)cin>>a[i];
    int sum = accumulate(a,a+n,0);
    sum-=m;
    if(sum>0)
        cout<<sum<<"\n";
    else
        cout<<0<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
