#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    int n,m,p;
    if(x%100==0){
        cout<<100;
    }else{
        n = x/100;
        m = (n+1)*100;
        p = m-x;
        cout<<p;
    }
    return 0;
}
