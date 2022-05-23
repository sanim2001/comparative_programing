#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,a=0,d=0;
    cin>>t;
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='A'){
            a++;
        }
        if(s[i]=='D'){
            d++;
        }
    }
    if(a==d){
        cout<<"Friendship";
    }
    else if(a>d){
        cout<<"Anton";
    }
    else{
        cout<<"Danik";
    }
}
