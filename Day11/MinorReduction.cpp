#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        long long int n=s.size();
        string str="";
        for(int i=n-1; i>0; i--){
            int a = s[i]-'0';
            int b = s[i-1]-'0';
            if(a+b>9){
                for(int j=0; j<i-1; j++){
                    cout<<s[j];
                }
                cout<<a+b;
                for(int j=str.size()-1; j>=0; j--){
                    cout<<str[j];
                }
                cout<<endl;
                //return;
            }
            else{
                str+=s[i];
            }
        }
        if(n==2){
            int a=s[0]-'0';
            int b=s[1]-'0';
            cout<<a+b<<endl;
        }
    }



}
