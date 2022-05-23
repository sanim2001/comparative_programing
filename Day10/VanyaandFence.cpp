#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,h;
    cin>>n>>h;
    int a,p=0,q=0;
    while(n--){
        cin>>a;
        if(a<=h){
            p +=1;
        }
        if(a>h){
            q+=2;
        }
    }
    cout<<p+q;
}

