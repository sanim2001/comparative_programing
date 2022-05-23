#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    int p=0;

    long long div =(n/4);
    if(n%2 !=0){
        cout<<p;
    }
    else if(n%4 ==0){
        div = div-1;
        cout<<div;
    }
    else{
       cout<<div;
    }

}
