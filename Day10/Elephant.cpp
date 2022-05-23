#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    if(n%5==0){
        n/=5;
        cout<<n;
    }else if(n<5){
        cout<<1;
    }
    else{
        n/=5;
        cout<<n+1;
    }
}
