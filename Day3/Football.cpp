#include<bits/stdc++.h>
using namespace std;
int main(){

    int l;
    cin>>l;
    char s[l][100];
    for(int i=0;i<l; i++){
        cin>>s[i];
    }
    int t=0,winner;
    for(int i=0;i<l;i++){
        int goal =0;
        for(int j=0; j<l;j++){
            if(strcmp(s[i],s[j])==0){
                goal++;
            }
        }
        if(t<goal){
            t = goal;
            winner = i;
        }
    }
    cout<<s[winner];
    return 0;
}
