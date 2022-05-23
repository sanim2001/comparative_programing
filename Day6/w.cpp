#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    char ch,ch1;
    int b,c;
    cin>>a>>ch>>b>>ch1>>c;
    if(ch=='+'){
        if(a+b == c){
            cout<<"Yes";
        }
        else{
            cout<<a+b;
        }
    }
    else if(ch=='-'){
        if(a-b == c){
            cout<<"Yes";
        }
        else{
            cout<<a-b;
        }
    }
    else if(ch=='*'){
        if(a*b == c){
            cout<<"Yes";
        }
        else{
            cout<<a*b;
        }
    }


}


