#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int rem;
    if(a>=b){
        rem = a%b;
        if(rem==0){
            cout<<"Multiples";
        }
        else{
            cout<<"No Multiples";
        }
    }
    else{
        rem = b%a;
        if(rem==0){
            cout<<"Multiples";
        }
        else{
            cout<<"No Multiples";
        }
    }
    return 0;

}
