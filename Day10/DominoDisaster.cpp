#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a,b,c=1,sum=0;
    string s,l;
    while(n--){
        cin>>a>>s;
        for(int i=0; i<s.size();i++){
            if(s[i]=='U'){
              s[i]= 'D';
            }
            else if(s[i]=='D'){
                s[i]= 'U';
            }

        }
        cout<<s<<endl;
    }

}


