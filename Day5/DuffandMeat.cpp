#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a,b;
    int res =0,p=100;
    for(int i=0; i<n; i++){
        cin>>a>>b;
        p = min(p,b);
        res = res +(p*a);
    }
    cout<<res;
}
