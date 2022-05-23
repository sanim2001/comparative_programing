#include<bits/stdc++.h>
using namespace std;
int main(){

    int a;
    int b;
    cin>>a>>b;
    int sum = a*6;

    if(a>b || sum<b){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }
    return 0;
}
