#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a,b,c=0,sum=0;
    while(n--){
        cin>>a>>b;
        sum=(b-a)-1;
        if(sum>0){
            c++;
        }
    }
    if(c!=0){
        cout<<c;
    }
    else{
        cout<<0;
    }
}
