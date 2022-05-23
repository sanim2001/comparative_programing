#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    char ch;
    int b;
    cin>>a>>ch>>b;
    if(ch=='>'){
        if(a>b){
            cout<<"Right";
        }
        else{
            cout<<"Wrong";
        }
    }
    else if(ch=='<'){
        if(a<b){
            cout<<"Right";
        }
        else{
            cout<<"Wrong";
        }
    }
    else if(ch=='='){
        if(a==b){
            cout<<"Right";
        }
        else{
            cout<<"Wrong";
        }
    }


}

