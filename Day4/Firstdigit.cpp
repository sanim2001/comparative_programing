#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int rem,rev=0;
    while(n!=0){
        rem = n%10;
        rev = rev*10 + rem;
        n = n/10;
    }
    int rever = rev;
    int res = rever%10;
    if(res%2==0){
        cout<<"EVEN";
    }
    else{
        cout<<"ODD";
    }


}
