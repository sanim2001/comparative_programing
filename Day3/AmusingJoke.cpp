#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1,str2,str3;
    cin>>str1>>str2>>str3;
    string res = str1+str2;
    sort(res.begin(),res.end());
    sort(str3.begin(),str3.end());
    if(res==str3)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
