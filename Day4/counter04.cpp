#include<bits/stdc++.h>
using namespace std;
int main(){
    long n;
    string s1,s2;
    cin>>n;
    getchar();
    for(int i=1;i<=n;i++){
        getline (cin,s1);
        getline (cin,s2);
        if(s1==s2){
            cout<<"Case "<<i<<": "<<"Yes"<<endl;
            continue;
        }
        for(int j=0; j<s1.size(); j++){
            if(s1[j]==' '){
                s1.erase(j,1);
            }

        }
        if(s1==s2){
            cout<<"Case "<<i<<": Output Format Error"<<endl;
            continue;
        }
        else{
            cout<<"Case "<<i<<": Wrong Answer"<<endl;

        }



    }

}
