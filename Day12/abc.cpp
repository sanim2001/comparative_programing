#include<bits/stdc++.h>
using namespace std;


void check(){
    int n,c=0,p=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='0'){
            c++;
        }
        else if(s[i]=='1'){
            p++;
        }
    }
    if(c>1 || p>1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}
int main(){
    int t;
    cin>>t;

    while(t--){
        check();
    }
}
