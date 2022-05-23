#include<bits/stdc++.h>
using namespace std;
int main(){
    char a[100];
    cin>>a;
    int c=strlen(a);
    int b,d=0;

    for(int i=0; i<c; i++){
        b=0;
        for(int j=0; j<i; j++){
            if(a[i]==a[j]){
                b++;
                break;
            }
        }
        if(b==0){
            d++;
        }
    }



    if(d%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
    return 0;
}
