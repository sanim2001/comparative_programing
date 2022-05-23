#include<bits/stdc++.h>
using namespace std;
int main(){
    char a;
    char b;
    cin>>a>>b;
    if(a=='0' && b=='0'){
        cout<<'0';
    }
    else if(a=='1' && b=='1'){
        cout<<'1';
    }
    else if(a=='2' && b=='2'){
        cout<<'2';
    }
    else if(a=='0' && b=='1' || a=='1' && b=='0'){
        cout<<'2';
    }
    else if(a=='1' && b=='2' || a=='2' && b=='1'){
        cout<<'0';
    }
    else if(a=='0' && b=='2' || a=='2' && b=='0'){
        cout<<'1';
    }
    return 0;


}
