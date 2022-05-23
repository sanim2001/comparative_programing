#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1,str2,rev;
    cin>>str1>>str2;
    for(int i=str1.size()-1; i>=0; i--){
        rev = rev+str1[i];
    }
    if(str2==rev)
        cout<<"YES";
    else
        cout<<"NO";
}
