#include<bits/stdc++.h>
using namespace std;

int main(){

    string n,m;
    cin>>n>>m;
    for(int i=0; i<n.size(); i++){
        if(n[i]=='0' && m[i]=='0' || n[i]=='1' && m[i]=='1'){
            cout<<"0";
        }
        else{
            cout<<"1";
        }
    }


}

