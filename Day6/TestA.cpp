#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long a,b,c,mx;
    while(n--){
        cin>>a>>b>>c;
        mx = max({a,b,c});
        cout<<mx<<endl;
    }
}
