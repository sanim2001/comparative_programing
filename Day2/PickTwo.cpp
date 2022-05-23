#include<bits/stdc++.h>
using namespace std;
int main(){

    int a,b,c;
    cin>>a>>b>>c;
    int sum;
    if(a>=b && a>=c){
            if(b>c){
                sum = a+b;
                cout<<sum;
            }
            else{
                sum = a+c;
                cout<<sum;
            }
    }
    else if(b>=c && b>=a){
            if(a>c){
                sum = b+a;
                cout<<sum;
            }
            else{
                sum = c+b;
                cout<<sum;
            }
    }
    else{
        if(a>b){
                sum = c+a;
                cout<<sum;
            }
            else{
                sum = c+b;
                cout<<sum;
            }
    }
    return 0;
}
