#include<bits/stdc++.h>
using namespace std;

int main(){

    long long int n,i,sum=0;
    cin>>n;
    sum=pow(-1,n);
    if(sum>0){
       cout<<(sum*n)/2;
    }else{
        n++;
        cout<<((sum*n)/2);
    }

}
