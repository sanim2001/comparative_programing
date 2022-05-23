#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,c=0;
    cin>>n;

    while(true){
        if(n>=100){
            n-=100;
            c++;
        }
        else if(n>=20){
            n-=2
        }
        if(n%2!=0 && n%10!=5){
            n-=1;
            c++;
        }
        else if(){
            n-=5;
            c++;
        }
        else if(){

        }
    }
    //sum = n/100;

    cout<<n%10;

}
