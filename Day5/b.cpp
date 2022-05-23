#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a=0,b=0,res=0;
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        for(int j=0; j<s.size(); j++){
            if(s[j]=='a'){
                a++;
                a++;
            }
            else{
                b++;
            }
        }
        res = a+b;
        cout<<"Case"<<" "<<i+1<<": "<<res<<endl;
        res =0;
        a=0;
        b=0;
    }

}

