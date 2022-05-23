#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int c=1;
    while(getline(cin,s)){
        for(int i=0; i<s.size(); i++){
            s[i]-=7;
            cout<<s[i];
        }
        cout<<"\n";
    }
}

