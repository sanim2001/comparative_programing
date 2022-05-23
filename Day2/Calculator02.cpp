#include<bits/stdc++.h>
using namespace std;
int main(){

    int a;
    char ch;
    int b;
    cin>>a>>ch>>b;
    int res;
    if(ch=='+'){
        res = a+b;
        cout<<res;
    }
    else if(ch=='-'){
        res = a-b;
        cout<<res;
    }
    else if(ch=='*'){
        res = a*b;
        cout<<res;
    }
    else if(ch=='/'){
        res = a/b;
        cout<<res;
    }
    return 0;
}
