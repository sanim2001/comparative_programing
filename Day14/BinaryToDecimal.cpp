#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int result=0,c=1;
        string s;
        cin>>s;
        for(int i=s.size()-1; i>=0; i--){
            int lastN=s[i]-'0';
            result= result+(lastN*c);
            c=c*2;
        }
        cout<<result<<"\n";
    }

}
//0001
