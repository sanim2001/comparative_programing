#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int x=0,y=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            x++;
        }
        else{
            y++;
        }
    }
    if(x>y){
        cout<<x-y<<endl;
    }
    else{
        cout<<y-x<<endl;
    }


}
