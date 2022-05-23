#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int c=0,p=0;
    cin>>s;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='0'){
            c++;
            p=0;
        }
        if(s[i]=='1'){
            p++;
            c=0;

        }
        if(c==7 || p==7){
            cout<<"YES";
            return 0;
        }
    }
    //cout<<c;
    cout<<"NO";

}
