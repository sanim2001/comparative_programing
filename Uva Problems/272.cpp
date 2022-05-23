#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int c=1;
    while(getline(cin,s)){
        for(int i=0; i<s.size(); i++){
            if(s[i]=='"'){
                if(c%2==1){
                    cout<<"``";
                }
                else{
                    cout<<"''";
                }
                c++;
            }
            else{
                cout<<s[i];
            }
        }
        cout<<"\n";
    }
}
