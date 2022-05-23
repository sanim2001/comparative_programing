#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    if(n==1){
            cout<<"I hate it";
            exit(0);
    }
    string s1="I hate";
    string s2="I love";
    while(n--){

        cout<<s1;

        if(n>0){
            cout<<" that ";
        }
        if(n==0){
            cout<<" it";
            exit(0);
        }
        n--;
        if(n>=0) cout<<s2;
        if(n==0){
            cout<<" it";
            exit(0);
        }
        if(n>0){
            cout<<" that ";
        }
    }

}


