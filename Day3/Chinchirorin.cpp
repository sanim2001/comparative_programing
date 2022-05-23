#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b){
        cout<<c;
    }
    else if(b==c){
        cout<<a;
    }
    else if(a==c){
        cout<<b;
    }
    else if(a==b==c){
        cout<<a;
    }
    else{
        cout<<0;
    }
    return 0;
}
