#include<bits/stdc++.h>
using namespace std;




void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    if((2*b-c)>0 && (2*b-c)%a==0){
        cout<<"YES"<<"\n";
    }
    else if((2*b-a)>0 && (2*b-a)%c==0){
        cout<<"YES"<<"\n";
    }
    else if((c+a)%(2*b)==0){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
}
//(b-a)=(c-b)
//a=2b-c
//2b=c+a
//c=2b-a
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;

    while(t--){
        solve();
    }
}

