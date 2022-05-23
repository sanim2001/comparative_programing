#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;
        int o=0,l=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='0'){
                o++;
            }
            if(s[i]=='1'){
                l++;
            }
        }
        int mn=min(o,l);
        if(s.size()==1){
            cout<<0<<endl;
        }
        else if(o==l){
            cout<<o-1<<endl;
        }
        else{
            cout<<mn<<endl;
        }

    }
}
