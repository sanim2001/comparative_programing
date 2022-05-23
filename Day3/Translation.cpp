#include<bits/stdc++.h>
using namespace std;
int main(){
    string t;
    string s;
    cin>>t>>s;
    string sav,rev;
    for(int i=0; i<t.size(); i++){
        sav = sav+t[i];
    }
    string p=sav;
    reverse(p.begin(),p.end());

    if(p==s){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
