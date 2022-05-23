#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin>>n;
   for(int i=0; i<n;i++){
       string s;
       cin>>s;
       for(int j=0;j<s.size();j++){
            if(s[j]>=97 && s[j]<=122){
                s[j]=s[j]-32;
            }
        }
        cout<<"Case "<<i+1<<": "<<s<<endl;
   }
   return 0;
}

