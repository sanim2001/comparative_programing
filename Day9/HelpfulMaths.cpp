#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    vector<char> ch;
    for(int i=0; i<s.size(); i++){
        if(s[i]!='+'){
            ch.push_back(s[i]);
        }
    }//321
    sort(ch.begin(), ch.end());//123
    //cout<<sum;
    for(int i=0; i<ch.size(); i++){
        if(i==ch.size()-1){
           cout<<ch[i];
        }
        else
            cout<<ch[i]<<"+";
    }
    cout<<endl;



}
