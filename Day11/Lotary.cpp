#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,c=0;
    cin>>n;

    while(n>0){
        if(n>=100){
            n-=100;
            c++;
        }
        else if(n>=20){
            n-=20;
            c++;
        }
        else if(n>=10){
            n-=10;
            c++;
        }
        else if(n%10==5){
            n-=5;
            c++;
        }
        else{
            n-=1;
            c++;
        }
    }

    cout<<c;

}
//

