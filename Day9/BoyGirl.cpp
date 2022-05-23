#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;
    map<char,int>m;

    for(int i=0; i<s.size(); i++){
        m[s[i]]++;
    }
    int c=0;
    for(auto i:m){
        c++;
    }
    if(c%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
}

