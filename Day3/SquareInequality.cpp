#include<bits/stdc++.h>
using namespace std;
int main(){

    int a,b,c;
    cin>>a>>b>>c;

    int left = (a*a)+(b*b);
    if(left<(c*c)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}

