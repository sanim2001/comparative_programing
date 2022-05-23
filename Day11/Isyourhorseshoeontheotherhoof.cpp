#include<bits/stdc++.h>
using namespace std;

int main(){

    int a[4],c=0,s=0,p=0;
    for(int i=0; i<4; i++){
        cin>>a[i];
    }
    for(int i=0; i<3; i++){
        if(a[i]==a[i+1]) c++;
        else if(a[i]==a[i+2]){
          s++;

        }
        else if(a[i]==a[i+3]){
            p++;
        }
        //cout<<s;
    }
    if(s>0)
        cout<<s;
    else if(p>0)
        cout<<c+p;
    else
    cout<<c;
}




