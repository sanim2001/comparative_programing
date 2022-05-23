#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a<=b && a<=c){
            if(b>c){
                cout<<a<<" "<<b;
            }
            else{
                cout<<a<<" "<<c;
            }
    }
    else if(b<=c && b<=a){
            if(a>c){
                cout<<b<<" "<<a;
            }
            else{
                cout<<b<<" "<<c;
            }
    }
    else{
        if(a>b){
                cout<<c<<" "<<a;
            }
            else{
                cout<<c<<" "<<b;
            }
    }
    return 0;

}
