#include<bits/stdc++.h>
using namespace std;
int main(){

    char ch;
    cin>>ch;
    if(ch>='A' && ch<='Z'){
        ch = ch+32;
        cout<<ch;
    }
    else if(ch>='a' && ch<='z'){
        ch = ch-32;
        cout<<ch;
    }
    return 0;
}
