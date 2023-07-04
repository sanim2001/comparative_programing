#include<bits/stdc++.h>
using namespace std;
int main(){
    long double n,l;
    cin>>n>>l;
    vector<long double> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    sort(v.begin(),v.end());
    long double mx=0LL;
    for(int i=0; i<n-1; i++){
        mx=max(mx,(v[i+1]-v[i]));
    }
    mx=max(mx/2,max(v[0],l-v[n-1]));
    cout<<fixed<<setprecision(10)<<mx<<"\n";
}
